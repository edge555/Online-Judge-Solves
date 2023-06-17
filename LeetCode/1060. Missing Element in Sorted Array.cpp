class Solution {
public:
    int missingElement(vector<int>& nums, int k) {
        int lo=0,hi=nums.size()-1,ind=-1;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            int r=nums[mid];
            int missing=nums[mid]-nums[0]-mid;
            if(missing>=k){
                hi=mid-1;
                ind=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        if(ind==-1){
            ind=nums.size()-1;
        }
        int missing=nums[ind]-nums[0]-ind;
        return nums[ind]+k-missing;
    }
};
