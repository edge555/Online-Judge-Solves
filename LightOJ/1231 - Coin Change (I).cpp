#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
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
#define MOD 100000007
#define fi first
#define se second
#define N 1001
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define vi vector<int>
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define time cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int coin[51],Time[51],n;
ll dp[51][51][N];
ll coinchange(int i,int t,int amount)
{
    if(amount==0)
        return 1;
    if(i>=n)
        return 0;
    if(amount<0)
        return 0;
    ll res1=0,res2=0;
    if(dp[i][t][amount]!=-1)
        return dp[i][t][amount];
    if(t<Time[i])
        res1=coinchange(i,t+1,amount-coin[i]);
    res2=coinchange(i+1,0,amount);
    return dp[i][t][amount]=(res1+res2)%MOD;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int make;
        sff(n,make);
        int i,k;
        rep0(i,n)
            sf(coin[i]);
        rep0(i,n)
            sf(Time[i]);
        mem(dp,-1);
        ll ans=coinchange(0,0,make);
        pf("Case %d: %lld\n",t,ans%MOD);
    }
}
