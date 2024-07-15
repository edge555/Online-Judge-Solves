vector<vector<int>> findMissingRanges(vector<int>& nums, int lower, int upper) {
    vector<vector<int>>ans;
    if(nums.empty()) {
        ans.push_back({lower,upper});
        return ans;
    }
    if(nums[0]>lower) {
        ans.push_back({lower,nums[0]-1});
    }
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i+1]-nums[i]>1){
            ans.push_back({nums[i]+1,nums[i+1]-1});
        }

    }
    if(nums[nums.size()-1]<upper){
        ans.push_back({nums[nums.size()-1]+1,upper});
    }
    return ans;
}
