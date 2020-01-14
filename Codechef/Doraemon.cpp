#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(n) scanf("%d",&n)
#define sff(n1,n2) scanf("%d %d",&n1,&n2)
#define sfff(n1,n2,n3) scanf("%d %d %d",&n1,&n2,&n3)
#define sl(n) scanf("%lld",&n)
#define sll(n1,n2) scanf("%lld %lld",&n1,&n2)
#define slll(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define nl puts("");
#define pb push_back
#define MOD 1000000007
#define fi first
#define se second
#define N 1005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
int n,m;
bool valid(int x,int y)
{
    return x>=0 && x<n && y>=0 && y<m;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,j;
        sff(n,m);
        int ara[n+1][m+1];
        rep0(i,n)
        {
            rep0(j,m)
                sf(ara[i][j]);
        }
        ll ans=n*m;
        for(i=1;i<n-1;i++)
        {
            for(j=1;j<m-1;j++)
            {
                int xt,xb,xr,xl,yt,yb,yr,yl,cnt=0;
                xt=xb=xr=xl=i;
                yt=yb=yr=yl=j;
                while(1)
                {
                    xt--,xb++;
                    yr++,yl--;
                    if(valid(xt,yt) && valid(xb,yb) && valid(xr,yr) && valid(xl,yl) && ara[xt][yt]==ara[xb][yb] && ara[xr][yr]==ara[xl][yl])
                            ans++;
                    else
                        break;
                }
            }
        }
        pf("%lld\n",ans);
    }
}
