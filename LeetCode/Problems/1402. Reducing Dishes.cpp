class Solution {
public:
    int dp[505][505];
    int func(int ind,int mul,vector<int>&vec){
        if(ind==vec.size()){
            return 0;
        }
        if(dp[ind][mul]!=-1){
            return dp[ind][mul];
        }
        int ans=vec[ind]*mul+func(ind+1,mul+1,vec);
        int ans2=func(ind+1,mul,vec);
        return dp[ind][mul]=max(ans,ans2);
    }
    int maxSatisfaction(vector<int>& satisfaction) {
        memset(dp,-1,sizeof(dp));
        sort(satisfaction.begin(),satisfaction.end());
        return func(0,1,satisfaction);
    }
};
