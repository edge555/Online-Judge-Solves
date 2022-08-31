class Solution {
public:
    bool possible(int mid,vector<int>&nums,int maxOp){
        int cnt=0;
        for(auto x:nums){
            if(x<=mid){
                continue;
            }
            if(x%mid==0){
                cnt+=(x/mid)-1;
            }
            else{
                cnt+=(x/mid);
            }
        }
        return cnt<=maxOp;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        int lo=1,hi=1e9,ans=INT_MAX;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(possible(mid,nums,maxOperations)){
                ans=min(ans,mid);
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return ans;
    }
};
