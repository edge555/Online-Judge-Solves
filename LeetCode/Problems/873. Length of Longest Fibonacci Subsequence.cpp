class Solution {
public:
    unordered_map<int,int>mp;
    int dp[1005][1005];
        int func(vector<int>&vec,int i,int j){
        if(mp.find(vec[i]+vec[j])==mp.end()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        return dp[i][j]=1+func(vec,j,mp[vec[i]+vec[j]]);
    }
    int lenLongestFibSubseq(vector<int>& arr) {
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]=i;
        }
        int ans=0;
        for(int i=0;i<arr.size()-1;i++){
            for(int j=i+1;j<arr.size();j++){
                if(mp.find(arrs[i]+arr[j])!=mp.end()){
                    ans=max(ans,func(arr,i,j));
                }
            }
        }
        if(ans==0){
            return ans;
        }
        return ans+2;
    }
};
