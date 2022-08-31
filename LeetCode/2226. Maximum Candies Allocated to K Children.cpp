class Solution {
public:
    bool possible(long long mid,vector<int>&candies,long long k){
        long long cnt=0;
        for(auto x:candies){
            if(x>=mid){
                cnt+=x/mid;
            }
        }
        return cnt>=k;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        long long lo=1,hi=1e13,ans=0;
        while(lo<=hi){
            long long mid=(lo+hi)>>1;
            if(possible(mid,candies,k)){
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
