#include <bits/stdc++.h>
using namespace std;
int main ()
{
    char ara[100000];
    int a,b,c,i,j,k,n;
    cin>>n;
    getchar();
    for (i=1;i<=n;i++)
    {
         while(gets(ara))
        {
            if(strlen(ara)==0)
            {
                break;
            }
        for (j=0;ara[j]!='\0';j++)
        {
            if (ara[j]=='1')
                ara[j]='I';
            else if (ara[j]=='2')
                ara[j]='Z';
            else if (ara[j]=='3')
                ara[j]='E';
            else if (ara[j]=='4')
                ara[j]='A';
            else if (ara[j]=='5')
                ara[j]='S';
            else if (ara[j]=='6')
                ara[j]='G';
            else if (ara[j]=='7')
                ara[j]='T';
            else if (ara[j]=='8')
                ara[j]='B';
            else if (ara[j]=='9')
                ara[j]='P';
            else if (ara[j]=='0')
                {
                ara[j]='O';
                }
            printf ("%c",ara[j]);
        }
        cout<<endl;
    }
    if(i!=n)
        cout<<endl;
    }
    return 0;
}
