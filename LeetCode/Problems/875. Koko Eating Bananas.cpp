class Solution {
public:
    bool possible(long long mid,vector<int>&piles,long long h){
        long long cnt=0;
        for(auto x:piles){
            if(x<mid){
                cnt++;
            }
            else{
                if(x%mid==0){
                    cnt+=x/mid;
                }
                else{
                    cnt+=(x/mid)+1;
                }
            }
        }
        return cnt<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long lo=1,hi=1e9,ans=LONG_MAX;
        while(lo<=hi){
            long long mid=(lo+hi)>>1;
            if(possible(mid,piles,h)){
                hi=mid-1;
                ans=min(ans,mid);
            }
            else{
                lo=mid+1;
            }
        }
        return ans;
    }
};
