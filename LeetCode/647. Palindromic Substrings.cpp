class Solution {
public:
    int dp[1001][1001];
    int func(int i,int j,string &s){
        if(i>j){
            return 1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans=0;
        if(s[i]!=s[j]){
            ans=0;
        }
        else{
            ans=func(i+1,j-1,s);
        }
        return dp[i][j]=ans;
    }
    int countSubstrings(string s) {
        memset(dp,-1,sizeof(dp));
        int ans=0;
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                ans+=func(i,j,s);
            }
        }
        return ans+s.size();
    }
};
