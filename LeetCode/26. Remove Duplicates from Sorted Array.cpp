class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int i,ind=0,last=nums[0]-1;
        for(i=0;i<nums.size();i++){
            if(nums[i]!=last){
                last=nums[i];
                nums[ind]=last;
                ind++;
            }
        }
        return ind;
    }
};
