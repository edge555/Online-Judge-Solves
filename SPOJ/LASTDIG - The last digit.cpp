#include <bits/stdc++.h>
using namespace std;
int mdl(int a, char b[])
{
    int mod=0,i;
    for(i=0;i<strlen(b);i++)
        mod=(mod*10+ b[i]-'0')%a;
    return mod;
}
int ld(char a[],char b[])
{
    int la=strlen(a),lb=strlen(b),j,res=1;
    if (la==1 && lb==1 && b[0]=='0' && a[0]=='0')
        return 1;
    if (lb==1 && b[0]=='0')
        return 1;
    if (la==1 && a[0]=='0')
        return 0;
    int exp=(mdl(4,b)==0)?4:mdl(4,b);
    while(exp--)
        res=res*(a[la-1]-'0');
    return res%10;
}
int main()
{
    int n;cin>>n;getchar();
    while(n--)
    {
        char a[1000],b[1000];
        cin>>a;cin>>b;
        cout<<ld(a,b)<<endl;
    }
}
