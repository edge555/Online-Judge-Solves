class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int lo=1,hi=nums.size();
        int ans=-1;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            int ind=lower_bound(nums.begin(),nums.end(),mid)-nums.begin();
            if(nums.size()-ind==mid){
                return mid;
            }
            if(nums.size()-ind>mid){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return ans;
    }
};
