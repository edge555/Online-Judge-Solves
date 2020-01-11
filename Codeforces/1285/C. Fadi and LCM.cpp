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
ll lcm(ll a,ll b)
{
    return (a/__gcd(a,b))*b;
}
int main()
{
    ll i,j,n,k;
    sl(n);
    vector<ll>vec;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            vec.pb(i);
            ll p=n/i;
            if(p!=i)
                vec.pb(p);
        }
    }
    sort(all(vec));
    ll mn=1e18,x,y;
    rep0(i,sz(vec))
    {
        ll cur=vec[i];
        ll need=n/vec[i];
        if(lcm(cur,need)==n)
        {
            if(max(cur,need)<mn)
            {
                mn=max(cur,need);
                x=cur,y=need;
            }
        }
    }
    pf("%lld %lld",x,y);
}
