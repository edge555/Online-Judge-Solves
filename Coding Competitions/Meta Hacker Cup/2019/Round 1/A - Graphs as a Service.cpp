#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 55
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;

ll dis[N][N],cost[N][N],n;
struct edge
{
    ll u,v,w;
};
vector<edge>vec;
void reset()
{
    ll i,j,k;
    rep(i,n)
    {
        rep(j,n)
        {
            dis[i][j]=1e18;
            cost[i][j]=1e18;
        }
    }
    vec.clear();
}
void setvalue()
{
    ll i,j,k;
    rep(i,n)
    {
        rep(j,n)
            dis[i][j]=cost[i][j];
    }
}
void floydwarshall()
{
    ll i,j,k;
    rep(k,n)
    {
        rep(i,n)
        {
            rep(j,n)
            {
                if(dis[i][j]>dis[i][k]+dis[k][j])
                    dis[i][j]=dis[i][k]+dis[k][j];
            }
        }
    }
}
int main()
{
    ll t,tc;
    sl(tc);
    rep(t,tc)
    {
        ll i,j,m;
        sll(n,m);
        reset();
        ll u,v,w;
        while(m--)
        {
            slll(u,v,w);
            cost[u][v]=w;
            cost[v][u]=w;
            vec.pb({u,v,w});
        }
        setvalue();
        floydwarshall();
        bool chk=true;
        rep(i,n)
        {
            rep(j,n)
            {
                if(dis[i][j]>1e18)
                {
                    chk=false;
                    break;
                }
            }
        }
        pf("Case #%lld:",t);
        if(chk)
        {
            rep0(i,vec.size())
            {
                if(dis[vec[i].u][vec[i].v]!=vec[i].w)
                {
                    chk=false;
                    break;
                }
            }
        }
        if(!chk)
        {
            pf(" impossible\n");
            continue;
        }
        pf(" %lld\n",(n*(n-1))/2);
        rep(i,n)
        {
            reps(j,i+1,n)
                pf("%lld %lld %lld\n",i,j,dis[i][j]);
        }
    }
}