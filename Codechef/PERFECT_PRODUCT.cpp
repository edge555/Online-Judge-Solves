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
using ll = long long;
const int N = 1000005;
const int MOD = 1000000007;
int ara[N];
bool mark[N];
vector<int>temp(101,0);
vector<int>tree[4*N],primes;
void sieve()
{
    int i,j;
    memset(mark,true,sizeof(mark));
    for(i=4;i<N;i+=2)
        mark[i]=false;
    for(i=3;i*i<N;i+=2)
    {
        if(mark[i])
        {
            for(j=i*i;j<N;j+=i*2)
                mark[j]=false;
        }
    }
    mark[1]=false;
    primes.pb(2);
    for(i=3;i<N;i+=2)
    {
        if(mark[i])
            primes.pb(i);
    }
}
vector<int> primefact(int n)
{
    vector<int>vec(101,0);
    for(int i=0;i<sz(primes);i++)
    {
        if(primes[i]>n)
            break;
        while(n%primes[i]==0)
        {
            n/=primes[i];
            vec[primes[i]]++;
        }
    }
    return vec;
}
vector<int> build(int node,int st,int en)
{
    if(st>en)
        return temp;
    if(st==en)
    {
        tree[node]=primefact(ara[st]);
        return tree[node];
    }
    vector<int>x(101,0),y(101,0),z(101,0);
    int i,mid=(st+en)>>1;
    int left=2*node,right=left+1;
    x=build(left,st,mid);
    y=build(right,mid+1,en);
    rep(i,100)
        z[i]=x[i]+y[i];
    tree[node]=z;
    return z;
}
vector<int> query(int node,int st,int en,int l,int r)
{
    if(r<st || l>en)
        return temp;
    if(st>=l && en<=r)
        return tree[node];
    vector<int>x(101,0),y(101,0),z(101,0);
    int i,mid=(st+en)>>1;
    int left=2*node,right=left+1;
    x=query(left,st,mid,l,r);
    y=query(right,mid+1,en,l,r);
    rep(i,100)
        z[i]=x[i]+y[i];
    return z;
}
void update(int node,int st,int en,int i,vector<int>val)
{
    if(st>en || st>i || en<i)
        return;
    if(i>=st && i<=en)
    {
        int j;
        rep(j,100)
            tree[node][j]+=val[j];
    }
    int mid=(st+en)>>1;
    int left=2*node,right=left+1;
    if(st<en)
    {
        update(left,st,mid,i,val);
        update(right,mid+1,en,i,val);
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("output.txt","w",stdout);
    #endif
    sieve();
    int i,n,k;
    sf(n);
    rep(i,n)
        sf(ara[i]);
    build(1,1,n);
    int q,c,l,r,v;
    sf(q);
    while(q--)
    {
        sf(c);
        if(c&1)
        {
            sff(l,r);
            vector<int>chk=query(1,1,n,l,r);
            bool f=true;
            rep(i,100)
            {
                if(mark[i])
                {
                    if(chk[i]&1)
                    {
                        f=false;
                        break;
                    }
                }
            }
            puts(f?"YES":"NO");
        }
        else
        {
            sff(i,v);
            vector<int>val=primefact(v);
            update(1,1,n,i,val);
        }
    }
}
