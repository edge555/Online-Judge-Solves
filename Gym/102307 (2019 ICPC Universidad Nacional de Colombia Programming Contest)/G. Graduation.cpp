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
int sub[N];
vector<int>grid[N];
bool vis[N],root[N];
void dfs(int u)
{
    if(vis[u])
        return;
    vis[u]=true;
    sub[u]=1;
    for(auto v:grid[u])
    {
        if(!vis[v])
        {
            dfs(v);
            sub[u]+=sub[v];
        }
    }
}
int main()
{
    int i,n,k,p;
    sff(n,k);
    rep(i,n)
    {
        sf(p);
        if(p==0)
            root[i]=true;
        else
            grid[p].pb(i);
    }
    priority_queue<pi>pq;
    rep(i,n)
    {
        if(root[i])
            dfs(i);
    }
    rep(i,n)
    {
        if(root[i])
            pq.push({sub[i],i});
    }
    int cnt=0;
    while(!pq.empty())
    {
        cnt++;
        int u,taken=0;
        vector<int>vec;
        while(1)
        {
            if(taken>=k || pq.empty())
                break;
            taken++;
            pi pr=pq.top();
            pq.pop();
            u=pr.se;
            for(auto v:grid[u])
                vec.pb(v);
        }
        for(auto v:vec)
            pq.push({sub[v],v});
    }
    pf("%d",cnt);
}
