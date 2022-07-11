class Solution {
public:
    bool possible(vector<int>&weights,int mid,int days){
        int sum=0,cnt=1;
        for(auto x:weights){
            if(x>mid){
                return false;
            }
            if(sum+x<=mid){
                sum+=x;
            }
            else{
                sum=x;
                cnt++;
            }
        }
        return cnt<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int lo=1,hi=INT_MAX-1,ans=INT_MAX;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(possible(weights,mid,days)){
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
