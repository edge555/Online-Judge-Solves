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

#define nl puts("");
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
const int N = 500005;
const int MOD = 1000000007;
ll ara[N],inc[N],decc[N],prefsum[N],sufsum[N];

int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt","w",stdout);
    #endif
    FAST;
    ll i,n,h,k;
    cin>>n>>h;
    bool f=true;
    rep(i,n)
    {
        cin>>ara[i];
        if(ara[i]>h)
            f=false;
    }
    if(!f)
    {
        cout<<-1;
        return 0;
    }
    inc[1]=ara[1];
    ll last=ara[1];
    for(i=2;i<=n;i++)
    {
        if(ara[i]>last)
        {
            last=ara[i];
            inc[i]=ara[i];
        }
        else
        {
            last++;
            inc[i]=last;
        }
    }
    decc[n]=ara[n];
    last=ara[n];
    for(i=n-1;i>=1;i--)
    {
        if(ara[i]>last)
        {
            last=ara[i];
            decc[i]=ara[i];
        }
        else
        {
            last++;
            decc[i]=last;
        }
    }
    prefsum[0]=0;
    sufsum[n+1]=0;
    rep(i,n)
        prefsum[i]=prefsum[i-1]+inc[i]-ara[i];
    for(i=n;i>=1;i--)
        sufsum[i]=sufsum[i+1]+decc[i]-ara[i];
    ll ans=1e18;
    reps(i,2,n-1)
    {
        if(inc[i-1]>=h || decc[i+1]>=h)
            continue;
        ll leftneed=prefsum[i-1];
        ll middleneed=h-ara[i];
        ll rightneed=sufsum[i+1];
        ll tot=leftneed+middleneed+rightneed;
        if(tot<ans)
            ans=tot;
    }
    if(ans==1e18)
        ans=-1;
    cout<<ans;
}
