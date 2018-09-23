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

int main()
{
    int n,i,j;
    ll coin[25];
    for(i=1;i<22;i++)
        coin[i]=i*i*i;
    ll dp[10005];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(i=1;i<22;i++)
    {
        for(j=coin[i];j<10005;j++)
        {
            if(dp[j-coin[i]])
                dp[j]+=dp[j-coin[i]];
        }
    }
    while(cin>>n)
        cout<<dp[n]<<endl;

}
