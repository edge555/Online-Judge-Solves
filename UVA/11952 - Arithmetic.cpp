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

ll val(char c)
{
    if(c>='0' && c<='9')
        return(ll)c-'0';
    else
        return(ll)c-'A'+10;
}
char reVal(ll num)
{
    if(num>=0 && num<=9)
        return(char)(num+'0');
    else
        return(char)(num-10+'A');
}
ll toDeci(string str,ll base)
{
    ll i,len=str.size();
    ll power=1,num=0;
    for(i=len-1;i>=0;i--)
    {
        if(val(str[i])>=base)
           return -1;
        num+=val(str[i])*power;
        power=power*base;
    }
    return num;
}
bool allone(ll a,ll b,ll c)
{
    if(a==0 || b==0 || c==0)
        return false;
    while(a>0)
    {
        if(a%10!=1)
            return false;
        a/=10;
    }
    while(b>0)
    {
        if(b%10!=1)
            return false;
        b/=10;
    }
    while(c>0)
    {
        if(c%10!=1)
            return false;
        c/=10;
    }
    return true;
}
int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt","w",stdout);
    #endif
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        ll i,a,b,c;
        string s,t;
        cin>>a>>s>>b>>t>>c;
        if(allone(a,b,c))
        {
            string as=to_string(a);
            string bs=to_string(b);
            string cs=to_string(c);
            as+=bs;
            if(as==cs)
                puts("1");
            else
                puts("0");
            continue;
        }
        ll ans=0;
        for(i=2;i<=36;i++)
        {
            ll aa=toDeci(to_string(a),i);
            ll bb=toDeci(to_string(b),i);
            ll cc=toDeci(to_string(c),i);
            if(aa<0 || bb<0 || cc<0)
                continue;
            if(aa+bb==cc)
            {
                ans=i;
                break;
            }
        }
        pf("%lld\n",ans);
    }
}
