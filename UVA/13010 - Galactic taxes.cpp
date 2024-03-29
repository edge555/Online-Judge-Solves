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
const double eps = 1e-9;
using ll = long long;
int n,m;
double dis[N];
struct node
{
    int v;
    double c;

};
struct node3
{
    int v,a,b;

};
struct comp {
    bool operator()(node const& n1, node const& n2)
    {
        return n1.c-eps>n2.c;
    }
};

vector<node3>grid[N];
void reset()
{
    int i;
    rep0(i,n+1)
    {
        grid[i].clear();
    }
}
double dijkstra(double t)
{
    int i;
    rep0(i,n+1)
        dis[i]=2e9*1.0;
    dis[0]=0.0;
    priority_queue<node,vector<node>,comp> pq;
    pq.push({0,0.0});
    while(!pq.empty())
    {
        node cur=pq.top();
        pq.pop();
        int u = cur.v;
        for(auto x:grid[u])
        {
            int v=x.v;
            double cost=x.a*t+x.b;
            if(dis[v]-eps>dis[u]+cost)
            {
                dis[v]=dis[u]+cost;
                pq.push({v,dis[v]});
            }
        }
    }
    return dis[n-1];
}
int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt","w",stdout);
    #endif
    while(sff(n,m)!=EOF)
    {
        reset();
        int i,u,v,a,b;
        rep0(i,m)
        {
            sff(u,v);
            sff(a,b);
            u--;
            v--;
            grid[u].pb({v,a,b});
            grid[v].pb({u,a,b});
        }
        double lo=0.0,hi=24*60*1.0;
        while(lo<=hi-eps)
        {
            double l=lo+(hi-lo)/3.0;
            double r=hi-(hi-lo)/3.0;
            if(dijkstra(l)+eps<dijkstra(r))
                lo=l;
            else
                hi=r;
        }
        cout<<fixed<<setprecision(5)<<dijkstra(hi)<<endl;
    }

}
