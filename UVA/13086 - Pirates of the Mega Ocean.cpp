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
#define MOD 1000007
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
using namespace std;
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        ll i,n,m,p,q,r,x,y,z,k,mn;
        sll(n,m);
        slll(p,q,r);
        slll(x,y,z);
        vector<ll>vec,single,mul;
        unordered_map<ll,bool>mp;
        rep(i,n)
        {
            ll t=(p*i*i+q*i+r)%MOD;
            vec.pb(t);
        }
        rep(i,m)
        {
            ll t=(x*i*i+y*i+z)%n;
            mp[t+1]=true;
        }
        rep0(i,n)
        {
            if(mp[i+1])
                single.pb(vec[i]);
            else
                mul.pb(vec[i]);
        }
        sort(mul.begin(),mul.end());
        mn=mul[0];
        ll ans=0;
        rep0(i,single.size())
            ans+=mn*(single[i]);
        for(i=1;i<mul.size();i++)
            ans+=mn*mul[i];
        pf("Case %d: %lld\n",t,ans);
    }
}
