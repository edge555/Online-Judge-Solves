class Solution {
public:
    bool possible(int mid,int n,vector<int>&vec){
        int one=0,zero=0,len=0;
        int st=0,en=mid-1;
        for(int i=0;i<=en;i++){
            if(vec[i]==1){
                one++;
            }
            else{
                zero++;
            }
            len++;
        }
        if(zero==0){
            if(len-1>=mid){
                return true;
            }
        }
        else{
            if(zero==1){
                return true;
            }
        }
        while(en<n-1){
            if(vec[st]==1){
                one--;
            }
            else{
                zero--;
            }
            st++;
            en++;
            if(vec[en]==1){
                one++;
            }
            else{
                zero++;
            }

            if(zero==0){
                if(len-1>=mid){
                    return true;
                }
            }
            else{
                if(zero==1){
                    return true;
                }
            }
        }
        return false;
    }
    int longestSubarray(vector<int>& nums) {
        bool zero=false,one=false;
        for(auto x:nums){
            if(x==0){
                zero=true;
            }
            else{
                one=true;
            }
        }
        if(!zero){
            return nums.size()-1;
        }
        if(!one){
            return 0;
        }
        int n=nums.size();
        int lo=1,hi=n,ans=0;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(possible(mid,n,nums)){
                ans=max(ans,mid);
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return ans-1;
    }
};
