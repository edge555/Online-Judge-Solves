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
ll add2mod(ll a,ll b){
    return ((a%MOD)+(b%MOD))%MOD;
}
ll mul3mod(ll a,ll b,ll c){
    ll x=((a%MOD)*(b%MOD))%MOD;
    ll y=((x%MOD)*(c%MOD))%MOD;
    return y;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("watering_well_chapter_2_input.txt", "r", stdin);
        freopen("output.txt","w",stdout);
    #endif
    int t,tc=1;
    sf(t);
    while(t--){
        int i,n,q;
        sf(n);
        ll x,y,sumx=0,sumy=0,sqx=0,sqy=0;
        rep0(i,n){
            sll(x,y);
            sqx+=(x*x)%MOD;
            sqy+=(y*y)%MOD;
            sumx=((sumx%MOD)+(x%MOD))%MOD;
            sumy=((sumy%MOD)+(y%MOD))%MOD;
        }
        sf(q);
        ll ans=0;
        while(q--){
            sll(x,y);
            ll a=add2mod(sqx,sqy);
            ans=((ans%MOD)+(a%MOD))%MOD;
            if(ans<0){
                ans+=MOD;
            }
            ll b=mul3mod(n,x,x);
            ans=((ans%MOD)+(b%MOD))%MOD;
            if(ans<0){
                ans+=MOD;
            }
            ll c=mul3mod(n,y,y);
            ans=((ans%MOD)+(c%MOD))%MOD;
            if(ans<0){
                ans+=MOD;
            }
            ll d=mul3mod(2LL,x,sumx);
            ans=((ans%MOD)-(d%MOD))%MOD;
            if(ans<0){
                ans+=MOD;
            }
            ll e=mul3mod(2LL,y,sumy);
            ans=((ans%MOD)-(e%MOD))%MOD;
            if(ans<0){
                ans+=MOD;
            }
            ans%=MOD;
        }
        pf("Case #%d: %lld\n",tc++,ans);
    }
}
