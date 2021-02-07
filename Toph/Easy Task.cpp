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

const int N = 100005;
const int MOD = 1000000007;
using ll = long long;

#define inf 2e18
ll arr[N],tree[4*N],tree2[4*N],lazy[4*N],lazy2[4*N];
void build1(ll node,ll a,ll b)
{
    if(a>b)
        return;
    if(a==b)
    {
        tree[node]=arr[a];
        lazy[node]=0;
        return;
    }
    ll mid=(a+b)/2;
    build1(node*2,a,mid);
    build1(node*2+1,1+mid,b);
    tree[node]=min(tree[node*2],tree[node*2+1]);
}
void build2(ll node,ll a,ll b)
{
    if(a>b)
        return;
    if(a==b)
    {
        tree2[node]=arr[a];
        lazy2[node]=0;
        return;
    }
    ll mid=(a+b)/2;
    build2(node*2,a,mid);
    build2(node*2+1,1+mid,b);
    tree2[node]=tree2[node*2]+tree2[node*2+1];
}
void update1(ll node,ll a,ll b,ll i,ll j,ll value)
{
    if(lazy[node]!=0)
    {
        tree[node]+=lazy[node];
        if(a!= b)
        {
            lazy[node*2]+=lazy[node];
            lazy[node*2+1]+=lazy[node];
        }
        lazy[node]=0;
    }
    if(a>b || a>j || b<i)
        return;
    if(a>=i && b<=j)
    {
        tree[node]+=value;
        if(a!=b)
        {
            lazy[node*2]+=value;
            lazy[node*2+1]+=value;
        }
        return;
    }
    ll mid=(a+b)/2;
    update1(node*2,a,mid,i,j,value);
    update1(1+node*2,1+mid,b,i,j,value);
    tree[node]=min(tree[node*2],tree[node*2+1]);
}
void update2(ll node,ll a,ll b,ll i,ll j,ll value)
{
    if(lazy2[node]!=0)
    {
        tree2[node]+=(b-a+1)*lazy2[node];
        if(a!=b)
        {
            lazy2[node*2]+=lazy2[node];
            lazy2[node*2+1]+=lazy2[node];
        }
        lazy2[node]=0;
    }
    if(a>b || a>j || b<i)
        return;
    if(a>=i && b<=j)
    {
        tree2[node]+=(b-a+1)*value;
        if(a!=b)
        {
            lazy2[node*2]+=value;
            lazy2[node*2+1]+=value;
        }
        return;
    }
    ll mid=(a+b)/2;
    update2(node*2,a,mid,i,j,value);
    update2(1+node*2,1+mid,b,i,j,value);
    tree2[node]=tree2[node*2]+tree2[node*2+1];
}
ll query1(ll node,ll a,ll b,ll i,ll j)
{
    if(a>b || a>j || b<i)
        return inf;
    if(lazy[node]!=0)
    {
        tree[node]+=lazy[node];
        if(a!=b)
        {
            lazy[node*2]+=lazy[node];
            lazy[node*2+1]+=lazy[node];
        }
        lazy[node]=0;
    }
    if(a>=i && b<=j)
        return tree[node];
    ll mid=(a+b)/2;
    ll q1=query1(node*2,a,mid,i,j);
    ll q2=query1(1+node*2,1+mid,b,i,j);
    ll res=min(q1,q2);
    return res;
}
ll query2(ll node,ll a,ll b,ll i,ll j)
{
    if(a>b || a>j || b<i)
        return 0;
    if(lazy2[node]!=0)
    {
        tree2[node]+=(b-a+1)*lazy2[node];
        if(a!=b)
        {
            lazy2[node*2]+=lazy2[node];
            lazy2[node*2+1]+=lazy2[node];
        }
        lazy2[node]=0;
    }
    if(a>=i && b<=j)
        return tree2[node];
    ll mid=(a+b)/2;
    ll q1=query2(node*2,a,mid,i,j);
    ll q2=query2(1+node*2,1+mid,b,i,j);
    ll res=q1+q2;
    return res;
}
ll modInverse(ll a, ll m)
{
    ll m0 = m;
    ll y = 0, x = 1;
    if (m == 1)
      return 0;
    while (a > 1)
    {
        ll q = a / m;
        ll t = m;
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0)
       x += m0;
    return x;
}
int main()
{
    FAST;
    ll i,n,q;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    build1(1,0,n-1); // min
    build2(1,0,n-1); // sum
    cin>>q;
    ll c,l,r,m;
    while(q--)
    {
        cin>>c>>l>>r;
        l--;
        r--;
        if(c==1)
        {
            cout<<query1(1,0,n-1,l,r)<<endl;
        }
        else
        {
            cin>>m;
            ll sum=query2(1,0,n-1,l,r);
            if(__gcd(sum,m)==1)
            {
                ll imod=modInverse(sum,m);
                update1(1,0,n-1,l,r,imod);
                update2(1,0,n-1,l,r,imod);
            }
            else
            {
                update1(1,0,n-1,l,r,sum%m);
                update2(1,0,n-1,l,r,sum%m);
            }
        }
    }
}
