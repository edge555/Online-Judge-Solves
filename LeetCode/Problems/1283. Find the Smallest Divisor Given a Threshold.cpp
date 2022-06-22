class Solution {
public:
    static bool possible(vector<int>&vec,int mid,int threshold){
        int sum=0;
        for(auto x:vec){
            int r=x/mid;
            if(r*mid!=x){
                r++;
            }
            sum+=r;
        }
        return sum<=threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        sort(nums.begin(),nums.end());
        int lo=1,hi=nums[nums.size()-1],ans=-1;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(possible(nums,mid,threshold)){
                hi=mid-1;
                ans=mid;
            }
            else{
                lo=mid+1;
            }
        }
        return ans;
    }
};
