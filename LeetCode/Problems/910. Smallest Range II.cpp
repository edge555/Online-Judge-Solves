class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        if(nums.size()==1){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int mn=nums[0],mx=nums[n-1],ans=mx-mn;
        for(int i=0,j=1;j<n;i++,j++){
            int mn2=min(nums[0]+k,nums[j]-k);
            int mx2=max(nums[n-1]-k,nums[i]+k);
            ans=min(ans,mx2-mn2);
        }
        return ans;
    }
};
