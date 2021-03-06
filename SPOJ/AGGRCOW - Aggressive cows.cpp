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
#define pi pair<string,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int n,k;
vector<int>vec;
bool chk(ll c)
{
    int prev=vec[0],i,cnt=1;
    rep(i,n-1)
    {
        if(vec[i]-prev>=c)
        {
            prev=vec[i];
            cnt++;
        }
    }
    return cnt>=k;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        sff(n,k);
        int i,p;
        rep0(i,n)
        {
            sf(p);
            vec.pb(p);
        }
        sort(all(vec));
        ll hi=1e18,lo=0,ans,mid;
        while(lo<=hi)
        {
            mid=(lo+hi)/2;
            if(chk(mid))
            {
                lo=mid+1;
                ans=mid;
            }
            else
                hi=mid-1;
        }
        pf("%lld\n",ans);
        vec.clear();
    }
}
