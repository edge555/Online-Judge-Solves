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
#define pi pair<long long int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
vector<ll>vec,vec2;
vector<pi>vec3;
ll n,ans=1e18;
unordered_map<ll,int>mp;
void func(int i,int taken,ll sum)
{
    if(i==n)
    {
        vec3.pb({sum,taken});
        return;
    }
    func(i+1,taken+1,sum+vec[i]);
    func(i+1,taken,sum);
}
void func2(int i,int taken,ll sum)
{
    if(i==n)
    {
        mp[sum]=max(mp[sum],taken);
        return;
    }
    func2(i+1,taken+1,sum+vec2[i]);
    func2(i+1,taken,sum);
}
int main()
{
    ll i,j,k;
    sl(n);
    rep0(i,n)
    {
        sl(k);
        vec.pb(k);
    }
    rep0(i,n)
    {
        sl(k);
        vec2.pb(k);
    }
    func(0,0,0);
    func2(0,0,0);
    rep0(i,sz(vec3))
    {
        ll x=vec3[i].fi;
        if(mp[x])
            ans=min(ans,2*n-vec3[i].se-mp[x]);
    }
    if(ans==1e18)
        ans=2*n;
    pf("%lld",ans);
}
