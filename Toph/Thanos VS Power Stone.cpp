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
inline ll LCM(ll a,ll b)
{
    return a/__gcd(a,b)*b;
}
inline ll normalize(ll x, ll mod)
{
    x%=mod;
    if(x<0)
        x+=mod;
    return x;
}
struct GCD_type
{
    ll x,y,d;
};
GCD_type ex_GCD(ll a,ll b)
{
    if(b==0)
        return {1,0,a};
    GCD_type pom = ex_GCD(b,a%b);
    return {pom.y, pom.x - a / b * pom.y , pom.d};
}
ll a[N],b[N],r[N],n[N],p[N],ans,lcm;
int main()
{
    int i,t;
    cin>>t;
    rep(i,t)
        cin>>r[i];
    rep(i,t)
        cin>>p[i];
    rep(i,t)
    {
        a[i]=r[i];
        n[i]=p[i];
        //normalize(a[i], n[i]);
    }
    ans=a[1];
    lcm=n[1];
    for(i=2;i<=t;i++)
    {
        auto pom=ex_GCD(lcm,n[i]);
        ll x1=pom.x;
        ll d=pom.d;
        if((a[i]-ans)%d!=0)
        {
            cout<<"Infinity Stones are just a myth";
            return 0;
        }
        ans=normalize(ans + x1 * (a[i] - ans) / d % (n[i] / d) * lcm, lcm * n[i] / d);
        lcm=LCM(lcm, n[i]);
    }
    cout<<ans;
}
