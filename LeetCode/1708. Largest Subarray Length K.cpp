class Solution {
public:
    vector<int> largestSubarray(vector<int>& nums, int k) {
        int mx=-1,ind=-1;
        for(int i=nums.size()-k;i>=0;i--){
            if(nums[i]>mx){
                mx=nums[i];
                ind=i;
            }
        }
        vector<int>vec;
        for(int i=ind;k--;i++){
            vec.push_back(nums[i]);
        }
        return vec;
    }
};