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
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int dp[101][N],n;
bool vis[N];
ll ans;
vector<int>vec;
void reset(int n,int lim)
{
    vec.clear();
    memb(vis);
    int i,j;
    rep0(i,n+1)
    {
        rep0(j,lim+1)
            dp[i][j]=-1;
    }
}
ll func(int ind,int sum)
{
    if(dp[ind][sum]!=-1)
        return dp[ind][sum];
    if(ind==n)
        return 0;
    ll res=sum+vec[ind];
    if(!vis[res])
    {
        vis[res]=true;
        ans+=res;
    }
    ll x=func(ind+1,sum);
    ll y=func(ind+1,sum+vec[ind]);
    dp[ind][sum]=1;
    return 0;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,k,lim=0;
        sf(n);
        ans=0;
        rep0(i,n)
        {
            sf(k);
            vec.pb(k);
            lim+=k;
        }
        reset(n,lim);
        func(0,0);
        pf("%lld\n",ans);
    }
}
