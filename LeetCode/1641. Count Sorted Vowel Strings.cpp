class Solution {
public:
    int dp[51][6];
    int func(int i,int last,int &n){
        if(i>n){
            return 0;
        }
        if(i==n){
            return 1;
        }
        if(dp[i][last]!=-1){
            return dp[i][last];
        }
        int ans=0;
        for(int k=last;k<5;k++){
            ans+=func(i+1,k,n);
        }
        return dp[i][last]=ans;
    }
    int countVowelStrings(int n) {
        memset(dp,-1,sizeof(dp));
        int ans=0;
        for(int i=0;i<5;i++){
            ans+=func(1,i,n);
        }
        return ans;
    }
};
