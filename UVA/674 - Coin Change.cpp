#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n;
int coin[]={1,5,10,25,50};
int dp[6][7500];
int call(int i,int amount)
{
    if(i>=5)
    {
        if(amount==0)
            return 1;
        else
            return 0;
    }
    if(dp[i][amount]!=-1)
        return dp[i][amount];
    int ret1=0,ret2=0;
    if(amount-coin[i]>=0)
        ret1=call(i,amount-coin[i]);
    ret2=call(i+1,amount);
    return dp[i][amount]=ret1+ret2;

}
int main()
{
    memset(dp,-1,sizeof(dp));
    while(cin>>n)
        cout<<call(0,n)<<endl;
}
