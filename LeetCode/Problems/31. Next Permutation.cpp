class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind1=0,ind2=0;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind1=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]>nums[ind1]){
                ind2=i;
                break;
            }
        }
        swap(nums[ind1],nums[ind2]);
        int add=ind1;
        if(ind1==0 && ind2==0){
            add=-1;
        }
        sort(nums.begin()+add+1,nums.end());
    }
};
