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

#define endl "\n"
#define line puts("-------");
#define dbb(x) cout<<#x<<" : "<<x<<"\n";

const int N = 200005;
const int MOD = 1000000007;

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
using ll = long long;
int ara[N],depth[N],parent[N],freq[105];
vector<int>grid[N];
void reset(int n)
{
    int i;
    rep0(i,n+1)
        grid[i].clear();
}
void dfs(int from,int u,int dep)
{
    parent[u]=from;
    depth[u]=dep;
    int i;
    rep0(i,sz(grid[u]))
    {
        int v=grid[u][i];
        if(v!=from)
            dfs(u,v,dep+1);
    }
}
int lcaQuery(int u,int v)
{
    mem(freq,0);
    if(depth[u]>depth[v])
        swap(u,v);
    while(depth[v]>depth[u])
    {
        freq[ara[v]]++;
        if(freq[ara[v]]>1)
            return 0;
        v=parent[v];
    }
    while(u!=v)
    {
        freq[ara[u]]++;
        freq[ara[v]]++;
        if(freq[ara[v]]>1 || freq[ara[u]]>1)
            return 0;
        u=parent[u];
        v=parent[v];
    }
    freq[ara[u]]++;
    if(freq[ara[u]]>1)
        return 0;
    int i,last=-1,ans=1e8;
    rep(i,100)
    {
        if(freq[i])
        {
            if(last!=-1)
                ans=min(ans,i-last);
            last=i;
        }
    }
    return ans;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("output.txt","w",stdout);
    #endif
    FAST;
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        int i,n,q,k,u,v;
        cin>>n>>q;
        rep0(i,n)
            cin>>ara[i];
        reset(n);
        rep0(i,n-1)
        {
            cin>>u>>v;
            u--,v--;
            grid[u].pb(v);
            grid[v].pb(u);
        }
        dfs(0,0,0);
        while(q--)
        {
            cin>>u>>v;
            u--,v--;
            cout<<lcaQuery(u,v)<<endl;
        }
    }
}
