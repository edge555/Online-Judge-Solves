class Solution {
public:
    bool chk(vector<int> nums){
        bool rem=false,pos=true;
        int last=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<last){
                last=nums[i];
            }
            else{
                if(rem){
                    pos=false;
                    break;
                }
                else{
                    rem=true;
                }
            }
        }
        return pos;
    }
    bool chk2(vector<int> nums){
        bool rem=false,pos=true;
        int last=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>last){
                last=nums[i];
            }
            else{
                if(rem){
                    pos=false;
                    break;
                }
                else{
                    rem=true;
                }
            }
        }
        return pos;
    }
    bool canBeIncreasing(vector<int>& nums) {
        return chk(nums) || chk2(nums);
    }
};
