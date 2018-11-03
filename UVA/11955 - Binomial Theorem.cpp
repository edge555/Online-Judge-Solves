#include <bits/stdc++.h>

#define sf(n) scanf("%lld",&n)
#define sff(n,m) scanf ("%lld %lld",&n,&m)
#define sfff(n,m,o) scanf ("%d %d %d",&n,&m,&o)
#define pf printf
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,b) for(i=a;i<=b;i++)
using namespace std;
long long int coef[100][100];
int main()
{
    long long int i,j;
    coef[2][1]=1;
    coef[2][2]=2;
    coef[2][3]=1;
    for(i=3;i<=51;i++)
    {
        for(j=1;j<=i+1;j++)
        {
            if(j==1 || j==i+1)
                coef[i][j]=1;
            else
                coef[i][j]=(coef[i-1][j]+coef[i-1][j-1]);
        }
    }
    long long int tc,t=1;
    sf(tc);
    getchar();
    while(tc--)
    {
        string a="",b="",c="",s;
        long long int d,i,k;
        getline(cin,s);
        bool chk=false,chk2=false;
        rep0(i,s.size())
        {
            if(s[i]=='+')
                chk=true;
            else if(s[i]=='^')
                chk2=true;
            else if(!chk)
            {
                if(s[i]!='(')
                    a+=s[i];
            }
            else if(chk && !chk2)
            {
                if(s[i]!=')')
                    b+=s[i];
            }
            else if(chk && chk2)
                c+=s[i];
        }
        if(c.size()==1)
            k=(c[0]-'0');
        else
        {
            k=(c[0]-'0')*10;
            k+=(c[1]-'0');
        }
        pf("Case %lld: ",t++);
        if(k==1)
            cout<<a<<"+"<<b<<endl;
        else
        {
            long long int x=k,y=0;
            for(i=1;i<=k+1;i++,x--,y++)
            {
                long long int c=coef[k][i];
                if(i==1)
                    cout<<a<<"^"<<k;
                else if(i==k+1)
                    cout<<"+"<<b<<"^"<<k;
                else
                {
                    pf("+");
                    cout<<c;pf("*");
                    if(x>1)
                        cout<<a<<"^"<<x;
                    else
                        cout<<a;
                    pf("*");
                    if(y>1)
                        cout<<b<<"^"<<y;
                    else
                        cout<<b;
                }
            }
            puts("");
        }
    }
}
