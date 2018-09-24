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
    int wt[1005],val[1005],W[1005],dp[1005][50];
    int w,i,mem,j,n,k,m,tc;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        int sum=0;
        for(i=1;i<=n;i++)
            cin>>val[i]>>wt[i];

        cin>>mem;
        for(k=1;k<=mem;k++)
            cin>>W[k];

        memset(dp,0,sizeof(dp));
        for(k=1;k<=mem;k++)
        {
            for(m=1;m<=n;m++)
            {
                for(w=1;w<=W[k];w++)
                {
                    if(wt[m]>w)
                        dp[m][w]=dp[m-1][w];
                    else
                        dp[m][w]=max(dp[m-1][w],val[m]+dp[m-1][w-wt[m]]);
                }
            }
            sum=sum+dp[n][W[k]];
        }
        cout<<sum<<endl;
    }
}
