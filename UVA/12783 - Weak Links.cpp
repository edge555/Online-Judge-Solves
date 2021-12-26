#include <bits/stdc++.h>
using namespace std;

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

#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()

#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))

#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >

#define endl "\n";
#define line puts("-------");
#define dbb(x) cout<<#x<<" : "<<x<<"\n";

void __print(int x) {cerr << x;} void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;} void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;} void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;} void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;} void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';} void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V> void __print(const pair<T, V> &x)
{cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T> void __print(const queue<T> &x)
{queue<T>temp=x;cerr<<"\n-----\n";while(!temp.empty())
{cerr << temp.front() << endl;temp.pop();}cerr<<"-----\n";}
template<typename T> void __print(const stack<T> &x)
{stack<T>temp=x;cerr<<"\n-----\n";while(!temp.empty())
{cerr << temp.top() << endl;temp.pop();}cerr<<"-----\n";}
template<typename T> void __print(const T &x)
{int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V> void _print(T t, V... v)
{__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifndef ONLINE_JUDGE
    #define db(x...) cerr << "[" << #x << "] = [", _print(x)
#endif

const int N = 1005;
const int MOD = 1000000007;
using ll = long long;
int n,m;
vector<int>grid[N];
vector<pi>bridge;
int vis[N],seen[N],par[N];
int cnt,root,ap[N];
void reset()
{
    int i;
    rep0(i,N)
        grid[i].clear();
}
void dfs(int x)
{
    if(vis[x]!=-1)
        return;
    vis[x]=seen[x]=cnt++;
    int i,adj=0;
    rep0(i,grid[x].size())
    {
        int v=grid[x][i];
        if(par[x]==v)
            continue;
        if(vis[v]==-1)
        {
            adj++;
            par[v]=x;
            dfs(v);
            seen[x]=min(seen[x],seen[v]);
            if(seen[v]>=vis[x] && x!=root)
                ap[x]=1;
            if(seen[v]>vis[x])
                bridge.push_back(make_pair(v,x));
        }
        else
        {
            seen[x]=min(seen[x],vis[v]);
            seen[v]=min(seen[x],seen[v]);
        }
    }
    if(x==root)
        ap[x]=(adj>1);
}
void bridges()
{
    int i;
    bridge.clear();
    rep0(i,N)
    {
        vis[i]=seen[i]=par[i]=-1;
        ap[i]=0;
    }
    cnt=0;
    rep0(i,N)
    {
        if(vis[i]==-1)
        {
            root=i;
            dfs(i);
        }
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt","w",stdout);
    #endif
    while(1)
    {
        sff(n,m);
        reset();
        if(n==0 && m==0)
            break;
        int i,u,v;
        rep0(i,m)
        {
            sff(u,v);
            grid[u].pb(v);
            grid[v].pb(u);
        }
        bridges();
        for(int i=0;i<bridge.size();i++)
        {
            if(bridge[i].fi>bridge[i].se)
                swap(bridge[i].fi,bridge[i].se);
        }
        sort(all(bridge));
        pf("%d",bridge.size());
        for(auto x:bridge)
        {
            pf(" %d %d",x.fi,x.se);
        }
        puts("");

    }
}
