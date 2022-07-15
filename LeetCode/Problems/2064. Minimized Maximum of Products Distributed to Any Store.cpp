class Solution {
public:
    bool possible(int mid,int n,vector<int>&vec){
        int cnt=0;
        for(auto x:vec){
            if(x%mid==0){
                cnt+=x/mid;
            }
            else{
                cnt+=(x/mid)+1;
            }
        }
        return cnt<=n;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int lo=1,hi=1e9,ans=INT_MAX;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(possible(mid,n,quantities)){
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
