#include <bits/stdc++.h>

#define sf(n) scanf("%d",&n)
#define sff(n,m) scanf ("%d %d",&n,&m)
#define sfff(n,m,o) scanf ("%d %d %d",&n,&m,&o)
#define pf printf
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,b) for(i=a;i<=b;i++)
using namespace std;
int ara[101];
int main()
{
    int tc,t=1;
    sf(tc);
    while(tc--)
    {
        string a;
        cin>>a;
        memset(ara,0,sizeof(ara));
        int i,k=0;
        rep0(i,a.size())
        {
            if(a[i]=='.')
                continue;
            else
            {
                if(a[i]=='+')
                {
                    ara[k]++;
                    if(ara[k]==256)
                        ara[k]=0;
                }
                else if(a[i]=='-')
                {
                    ara[k]--;
                    if(ara[k]==-1)
                        ara[k]=255;
                }
                else if(a[i]=='>')
                {
                    k++;
                    if(k==100)
                        k=0;
                }
                else
                {
                    k--;
                    if(k==-1)
                        k=99;
                }
            }
        }
        pf("Case %d:",t++);
        rep0(i,100)
            printf(" %02X",ara[i]);
        puts("");
    }
}
