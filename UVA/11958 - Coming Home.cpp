#include <bits/stdc++.h>

#define sf(n) scanf("%d",&n)
#define sff(n,m) scanf ("%d %d",&n,&m)
#define sfff(n,m,o) scanf ("%d %d %d",&n,&m,&o)
#define pf printf
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,b) for(i=a;i<=b;i++)
using namespace std;
int main()
{
    int tc,t=1;
    sf(tc);
    while(tc--)
    {
        int n,a,b,mn=INT_MAX;
        sf(n);
        scanf("%d:%d",&a,&b);
        int t1=(a*60)+b;
        while(n--)
        {
            int cnt,k;
            int x,y,xx=a,yy=b;
            scanf("%d:%d",&x,&y);sf(k);
            int t2=(x*60)+y;
            if(t2<t1)
                t2+=1440;
            t2+=k;
            cnt=t2-t1;
            if(cnt<mn)
                mn=cnt;
        }
        pf("Case %d: %d\n",t++,mn);
    }
}
