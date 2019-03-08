#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ara[100000];
    int i,cnt;
    gets(ara);
    for (i=0,cnt=0;ara[i]!='\0';i++)
    {
        if (ara[i]=='4' || ara[i]=='7')
            cnt++;
    }
    if (cnt==4 || cnt==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
