#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%lld",&num)
#define sff(num1,num2) scanf("%lld %lld",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<long long int,long long int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
ll dis[N];
ll n;
priority_queue<pi,vector<pi>,greater<pi>>pq;
void setvalue()
{
    ll i;
    rep0(i,n+1)
        dis[i]=1e18;
}
vector<pi>grid[N];
void dijkstra(ll src)
{
    ll i;
    dis[src]=0;
    pq.push({0,src});
    while(!pq.empty())
    {
        pi p=pq.top();
        pq.pop();
        ll u=p.se,w=p.fi;
        if(w>dis[u])
            continue;
        rep0(i,grid[u].size())
        {
            pi pr=grid[u][i];
            ll c=pr.se,v=pr.fi;
            if(dis[u]+c<dis[v])
            {
                dis[v]=dis[u]+c;
                pq.push({dis[v],v});
            }
        }
    }
}
int main()
{
    ll tc,t;
    sf(tc);
    rep(t,tc)
    {
        ll i,j,w;
        sf(n);
        rep0(i,n)
        {
            rep0(j,n)
            {
                sf(w);
                grid[i].pb({j,w});
            }
        }
        ll p,q,r;
        sf(r);
        ll sum=0;
        while(r--)
        {
            sff(p,q);
            p--;q--;
            if(p==q)
                continue;
            setvalue();
            dijkstra(p);
            sum+=dis[q];
        }
        pf("Case #%lld: %lld\n",t,sum);
        rep0(i,n)
            grid[i].clear();
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
