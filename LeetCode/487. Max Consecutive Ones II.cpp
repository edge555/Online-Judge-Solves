class Solution {
public:
    bool possible(int mid,vector<int>&nums){
        int sum=0,st=0,en=0;
        while(en<mid){
            sum+=nums[en++];
        }
        if(sum+1>=mid){
            return true;
        }
        en--;
        while(en<nums.size()-1){
            sum-=nums[st++];
            sum+=nums[++en];
            if(sum+1>=mid){
                return true;
            }
        }
        return false;
    }
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int lo=1,hi=nums.size(),ans=1;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(possible(mid,nums)){
                ans=max(ans,mid);
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return ans;
    }
};
