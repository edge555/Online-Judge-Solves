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
bool comp(pi a,pi b)
{
    return a.se>b.se;
}
int main()
{
    int i,n,k,p,a,b;
    vector<pi>vec;
    sff(n,k);
    rep0(i,n)
    {
        sff(a,b);
        vec.pb({a,b});
    }
    sort(all(vec),comp);
    priority_queue<ll,vector<ll>,greater<ll> >pq;
    ll sum=0,ans=-1;
    rep0(i,n)
    {
        if(sz(pq)<k)
        {
            sum+=vec[i].fi;
            pq.push(vec[i].fi);
        }
        else if(pq.top()<vec[i].fi)
        {
            sum-=pq.top();
            pq.pop();
            pq.push(vec[i].fi);
            sum+=vec[i].fi;
        }
        ans=max(ans,ll(sum*vec[i].se));
    }
    pf("%lld",ans);
}
