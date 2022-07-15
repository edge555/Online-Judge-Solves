class Solution {
public:
    int getMaximumGenerated(int n) {
        int dp[101];
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            if(i&1){
                int r=(i-1)/2;
                dp[i]=dp[r]+dp[r+1];

            }
            else{
                int r=i/2;
                dp[i]=dp[r];
            }
        }
        int mx=0;
        for(int i=1;i<=n;i++){
            mx=max(mx,dp[i]);
        }
        return mx;
    }
};
