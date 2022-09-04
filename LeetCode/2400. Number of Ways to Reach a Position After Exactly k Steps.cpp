class Solution {
public:
    int dp[3001][3001];
    int addmod(int a,int b){
        return ((a%1000000007)+(b%1000000007))%1000000007;
    }
    int func(int curp,int endp,int steprem){
        if(curp==endp && steprem==0){
            return 1;
        }
        if(steprem<0){
            return 0;
        }
        if(dp[curp][steprem]!=-1){
            return dp[curp][steprem];
        }
        int a=func(curp-1,endp,steprem-1);
        int b=func(curp+1,endp,steprem-1);
        return dp[curp][steprem]=addmod(a,b);
    }
    int numberOfWays(int startPos, int endPos, int k) {
        startPos+=1000;
        endPos+=1000;
        memset(dp,-1,sizeof(dp));
        return func(startPos,endPos,k);
    }
};
