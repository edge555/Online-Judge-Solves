class Solution {
public:
    bool divisorGame(int n) {
        int dp[n+5];
        memset(dp,-1,sizeof(dp));
        dp[0]=0;
        dp[1]=0;
        for(int i=2;i<=n;i++)
        {
            bool f=false;
            for(int j=1;j*j<=i;j++)
            {
                if(i%j!=0)
                    continue;
                int p=j,q=i/j;
                if(i-j>0 && p<i)
                {
                    if(dp[i-p]==0)
                    {
                        f=true;
                        break;
                    }
                }
                if(i-q>0 && q<i)
                {
                    if(dp[i-q]==0)
                    {
                        f=true;
                        break;
                    }
                }
            }
            if(f)
                dp[i]=1;
            else
                dp[i]=0;
        }
        return dp[n];
    }
};
