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
#define N 100005
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
int n;
vector<int>grid[N];
bool vis[N],taken[N];
void reset()
{
    int i;
    rep0(i,n+1)
    {
        vis[i]=false;
        taken[i]=false;
        grid[i].clear();
    }
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,j,k,p;
        sf(n);
        reset();
        rep0(i,n)
        {
            sf(k);
            rep0(j,k)
            {
                sf(p);
                grid[i].pb(p);
            }
        }
        rep0(i,n)
        {
            bool f=false;
            rep0(j,grid[i].size())
            {
                int u=grid[i][j];
                if(vis[u])
                    continue;
                vis[u]=true;
                f=true;
                break;
            }
            if(f)
                taken[i]=true;
        }
        int px=-1,py=-1;
        rep0(i,n)
        {
            if(taken[i]==false)
                py=i;
        }
        rep(i,n)
        {
            if(vis[i]==false)
                px=i;
        }
        if(px!=-1 && py!=-1)
        {
            puts("IMPROVE");
            pf("%d %d\n",py+1,px);
        }
        else
            puts("OPTIMAL");
    }
}
