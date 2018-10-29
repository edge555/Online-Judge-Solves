#include <bits/stdc++.h>
using namespace std;
int cnt=0;
int main()
{
    int x,n,i,cnt=0;;
    char ara[10000];
    gets(ara);
    x=strlen(ara);
    for (i=0;ara[i]!='\0';i++)
    {
        if (ara[i]=='0')
        {
            if (ara[i+1]=='0' && ara[i+2]=='0' && ara[i+3]=='0' && ara[i+4]=='0' && ara[i+5]=='0' && ara[i+6]=='0')
            {
                cout<<"YES"<<endl;
                cnt++;
                break;
            }
        }
        else if (ara[i]=='1')
        {
            if (ara[i+1]=='1' && ara[i+2]=='1' && ara[i+3]=='1' && ara[i+4]=='1' && ara[i+5]=='1' && ara[i+6]=='1')
            {
                cout<<"YES"<<endl;
                cnt++;
                break;
            }
        }
    }
    if (cnt==0)
        cout<<"NO"<<endl;
}
