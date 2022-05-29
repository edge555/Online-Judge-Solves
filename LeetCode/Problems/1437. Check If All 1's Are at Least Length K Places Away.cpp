class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        vector<int>vec;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                vec.push_back(i);
            }
        }
        for(int i=1;i<vec.size();i++){
            if(vec[i]-vec[i-1]-1<k){
                return false;
            }
        }
        return true;
    }
};
