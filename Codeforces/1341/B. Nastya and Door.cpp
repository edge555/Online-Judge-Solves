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
#define N 200005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"	"<<#y<<" :: "<<y<<"";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
int peak[N],ara[N];
ll csum[N];
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        mem(peak,0);
        mem(csum,0);
        int i,n,k,p;
        vector<int>vec;
        sff(n,k);
        rep(i,n)
        {
            sf(ara[i]);
        }
        for(i=2;i<=n-1;i++)
        {
            if(ara[i]>ara[i-1] && ara[i]>ara[i+1])
                peak[i]=1;
        }
        for(i=1;i<=n;i++)
            csum[i]=csum[i-1]+peak[i];
        int ind=0;
        ll mx=-1;
        for(i=1;i<=n-k+1;i++)
        {
            if(csum[i+k-2]-csum[i]>mx)
            {
                mx=csum[i+k-2]-csum[i];
                ind=i;
            }
        }
        pf("%lld %d\n",mx+1,ind);
    }
}