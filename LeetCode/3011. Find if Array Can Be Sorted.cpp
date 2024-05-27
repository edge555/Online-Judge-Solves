class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        bool alreadySorted=true;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                alreadySorted=false;
                break;
            }
        }
        if(alreadySorted){
            return true;
        }
        vector<int>vec;
        for(auto x:nums){
            vec.push_back(__builtin_popcount(x));
        }
        vector<int>ans,temp={nums[0]};
        int lastBit=vec[0];
        for(int i=1;i<vec.size();i++){
            int bit=vec[i];
            if(bit==lastBit){
                temp.push_back(nums[i]);
            }
            else{
                sort(temp.begin(),temp.end());
                for(auto x:temp){
                    ans.push_back(x);
                }
                lastBit=bit;
                temp={nums[i]};
            }
        }
        if(temp.size()){
            sort(temp.begin(),temp.end());
            for(auto x:temp){
                ans.push_back(x);
            }
        }
        for(int i=1;i<ans.size();i++){
            if(ans[i-1]>ans[i]){
                return false;
            }
        }
        return true;
    }
};
