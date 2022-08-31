class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        int mx=-1,mx2=-1,ind=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mx){
                mx2=mx;
                mx=nums[i];
                ind=i;
            }
            else if(nums[i]>mx2){
                mx2=nums[i];
            }
        }
        if(mx>=mx2*2){
            return ind;
        }
        else{
            return -1;
        }
    }
};
