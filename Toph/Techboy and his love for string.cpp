#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int lrs(string str)
{
    int n=str.length();
    int dp[n+1][n+1],i,j;
    for (i=0;i<=n;i++)
        for (j=0;j<=n;j++)
            dp[i][j]=0;

    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++)
        {
            if (str[i-1]==str[j-1] && i!=j)
                dp[i][j]=1+dp[i-1][j-1];
            else
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        }
    string res="";
    i=n,j=n;
    while (i>0 && j>0)
    {
        if (dp[i][j]==dp[i-1][j-1]+1)
        {
           res=res+str[i-1];
           i--;
           j--;
        }
        else if (dp[i][j]==dp[i-1][j])
            i--;
        else
            j--;
    }
    return res.size();
}
int main()
{
    int n,i;
    sf(n);
    for (i=1;i<=n;i++)
    {
        string a;
        cin>>a;
        pf("Case %d: %d\n",i,lrs(a));
    }
}
