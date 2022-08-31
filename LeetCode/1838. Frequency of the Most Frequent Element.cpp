class Solution {
public:
    bool possible(int mid,vector<int>&vec,int &k){
        int st=0,en=mid-1;
        long long sum=0;
        for(int i=0;i<=en;i++){
            sum+=vec[i];
        }
        long long x=vec[en];
        if(sum+k>=x*mid){
            return true;
        }
        while(en<vec.size()-1){
            sum-=vec[st++];
            sum+=vec[++en];
            x=vec[en];
            if(sum+k>=x*mid){
                return true;
            }
        }
        return false;
    }
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int lo=1,hi=nums.size(),ans=0;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(possible(mid,nums,k)){
                lo=mid+1;
                ans=max(ans,mid);
            }
            else{
                hi=mid-1;
            }
        }
        return ans;
    }
};
