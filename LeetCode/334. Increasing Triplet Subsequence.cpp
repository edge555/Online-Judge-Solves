class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3){
            return false;
        }
        vector<int>vec;
        for(auto x:nums){
            auto it=lower_bound(vec.begin(),vec.end(),x);
            if(it==vec.end()){
                vec.push_back(x);
            }
            else{
                *it=x;
            }
            if(vec.size()>2){
                return true;
            }
        }
        return false;
    }
};
