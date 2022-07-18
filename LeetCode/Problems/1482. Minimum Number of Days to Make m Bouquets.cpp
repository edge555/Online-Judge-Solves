class Solution {
public:
    bool possible(int mid,vector<int>& bloomDay, int m, int k){
        int cnt=0,ans=0;
        for(auto x:bloomDay){
            if(x<=mid){
                cnt++;
            }
            else{
                cnt=0;
            }
            if(cnt>=k){
                cnt=0;
                ans++;
            }
        }
        return ans>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int lo=1,hi=1e9,ans=INT_MAX;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(possible(mid,bloomDay,m,k)){
                ans=min(ans,mid);
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        if(ans==INT_MAX){
            ans=-1;
        }
        return ans;
    }
};
