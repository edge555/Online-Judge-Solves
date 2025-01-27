class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0){
            return 1;
        }
        vector<int>dp(n+1);
        dp[0]=1;
        dp[1]=10;
        int x=9,p=9;
        for(int i=2;i<=n;i++){
            p*=x;
            x--;
            dp[i]=dp[i-1]+p;
        }
        return dp[n];
    }
};
