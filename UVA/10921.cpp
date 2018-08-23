#include <bits/stdc++.h>
using namespace std;
char ara[100000];
int main()
{
    while (scanf ("%s",ara)!=EOF)
    {
        int i;
        for (i=0;ara[i];i++)
        {
            if (ara[i]>='A' && ara[i]<='Z')
            {
                if (ara[i]=='A' || ara[i]=='B' || ara[i]=='C')
                    ara[i]='2';
                else if (ara[i]=='D' || ara[i]=='E' || ara[i]=='F')
                    ara[i]='3';
                else if (ara[i]=='G' || ara[i]=='H' || ara[i]=='I')
                    ara[i]='4';
                else if (ara[i]=='J' || ara[i]=='K' || ara[i]=='L')
                    ara[i]='5';
                else if (ara[i]=='M' || ara[i]=='N' || ara[i]=='O')
                    ara[i]='6';
                else if (ara[i]=='P' || ara[i]=='Q' || ara[i]=='R' || ara[i]=='S')
                    ara[i]='7';
                else if (ara[i]=='T' || ara[i]=='U' || ara[i]=='V')
                    ara[i]='8';
                else if (ara[i]=='W' || ara[i]=='X' || ara[i]=='Y' || ara[i]=='Z')
                    ara[i]='9';
            }
        }
        cout<<ara<<endl;
    }
}
