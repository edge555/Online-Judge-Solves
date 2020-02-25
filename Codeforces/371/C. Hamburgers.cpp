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
ll have[3],cost[3],need[3],need2[3],r;
bool possible(ll x)
{
    ll i;
    rep0(i,3)
        need2[i]=(x*need[i])-have[i];
    ll sum=0;
    rep0(i,3)
    {
        if(need2[i]>0)
            sum+=need2[i]*cost[i];
    }
    return sum<=r;
}
int main()
{
    FAST;
    string a;
    ll i;
    cin>>a;
    rep0(i,3)
        cin>>have[i];
    rep0(i,3)
        cin>>cost[i];
    cin>>r;
    rep0(i,a.size())
    {
        if(a[i]=='B')
            need[0]++;
        else if(a[i]=='S')
            need[1]++;
        else
            need[2]++;
    }
    ll lo=0,hi=1e14,ans=0;
    while(lo<=hi)
    {
        ll mid=(lo+hi)>>1;
        if(possible(mid))
        {
            lo=mid+1;
            ans=max(ans,mid);
        }
        else
            hi=mid-1;
    }
    cout<<ans;
}
