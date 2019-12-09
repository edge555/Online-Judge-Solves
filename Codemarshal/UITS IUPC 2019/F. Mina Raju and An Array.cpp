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
ll n,m;
vector<ll>vec;
bool chk(ll x)
{
    int i,part=0;
    ll sum=0;
    rep0(i,n)
    {
        if(vec[i]>x)
            return false;
        sum+=vec[i];
        if(sum>x)
        {
            sum=vec[i];
            part++;
        }
    }
    return part<m;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        ll i,k,lo,hi=0;
        sll(n,m);
        rep0(i,n)
        {
            sl(k);
            hi+=k;
            vec.pb(k);
        }
        lo=vec[0];
        ll mid,ans=1e18;
        while(lo<=hi)
        {
            mid=(lo+hi)>>1;
            if(chk(mid))
            {
                ans=min(ans,mid);
                hi=mid-1;
            }
            else
                lo=mid+1;
        }
        pf("Case %d: %lld\n",t,ans);
        vec.clear();
    }
}
