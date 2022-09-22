class Solution {
public:
    int dp[1001][1001];
    int func(int i,int j,int n,int m,vector<int>& nums1, vector<int>& nums2){
        if(i==nums1.size() || j==nums2.size()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans=0;
        if(nums1[i]==nums2[j]){
            ans=1+func(i+1,j+1,n,m,nums1,nums2);
        }
        return dp[i][j]=ans;
    }
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        memset(dp,-1,sizeof(dp));
        int n=nums1.size(),m=nums2.size(),ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans=max(ans,func(i,j,n,m,nums1,nums2));
            }
        }
        return ans;
    }
};
