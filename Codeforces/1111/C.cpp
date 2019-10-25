#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<ll,ll>
#define pii pair<pair<ll,ll>,pair<ll,ll> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
ll a,b;
vector<ll>vec;
ll func(ll st,ll en)
{
    ll len=en-st+1;
    ll ans1,ans2;
    ll x=lower_bound(all(vec),st)-vec.begin();
    ll y=upper_bound(all(vec),en)-vec.begin();
    y--;
    ll n=y-x+1;
    if(n==0)
        ans1=a;
    else
        ans1=b*n*len;
    if(st==en || n==0)
        return ans1;
    ll mid=(st+en)/2;
    ans2=min(ans1,func(st,mid)+func(mid+1,en));
    return ans2;
}
int main()
{
    ll n,k,i,p;
    sll(n,k);
    sll(a,b);
    rep0(i,k)
    {
        sl(p);
        vec.pb(p);
    }
    sort(all(vec));
    pf("%lld",func(1,pow(2,n)));
}
