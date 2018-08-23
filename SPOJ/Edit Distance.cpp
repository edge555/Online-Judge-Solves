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
int dp[4000][4000];
int min(int x,int y,int z)
{
    return min(min(x,y),z);
}

int editDistDP(string str1,string str2,int m,int n)
{
    int i,j;
    memset(dp,0,sizeof(dp[0][0])*(m+1)*(n+1));
    for (i=0;i<=m;i++)
    {
        for (j=0;j<=n;j++)
        {
            if (i==0)
                dp[i][j]=j;

            else if (j==0)
                dp[i][j]=i;
            else if (str1[i-1]==str2[j-1])
                dp[i][j]=dp[i-1][j-1];
            else
                dp[i][j]=1+min(dp[i][j-1],dp[i-1][j],dp[i-1][j-1]);
        }
    }
    return dp[m][n];
}

int main()
{
    int t;
    sf(t);
    getchar();
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout <<editDistDP(str1,str2,str1.length(),str2.length())<<endl;
    }
}
