class Solution {
public:
    bool possible(int mid,int target,vector<int>&vec){
        int sum=0,st=0,en=mid-1;
        for(int i=0;i<=en;i++){
            sum+=vec[i];
        }
        if(sum>=target){
            return true;
        }
        while(en<vec.size()-1){
            sum-=vec[st++];
            sum+=vec[++en];
            if(sum>=target){
                return true;
            }
        }
        return false;
    }
    int minSubArrayLen(int target, vector<int>& nums) {
        int lo=1,hi=nums.size(),ans=INT_MAX;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(possible(mid,target,nums)){
                hi=mid-1;
                ans=min(ans,mid);
            }
            else{
                lo=mid+1;
            }
        }
        if(ans==INT_MAX){
            ans=0;
        }
        return ans;
    }
};
