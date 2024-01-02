class Solution {
public:
    bool possible(int len, vector<int>& nums, int k){
        unordered_map<int,int>mp;
        unordered_set<int>s;
        bool f=true;
        for(int i=0;i<len;i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second>k){
                s.insert(it.first);
                f=false;
            }
        }
        if(f){
            return true;
        }
        int st=0,en=len-1;
        while(en<nums.size()-1){
            mp[nums[st]]--;
            if(mp[nums[st]]==k){
                s.erase(s.find(nums[st]));
            }
            st++;
            mp[nums[++en]]++;
            if(mp[nums[en]]>k){
                s.insert(nums[en]);
            }
            if(s.empty()){
                return true;
            }
        }
        return false;
    }
    int maxSubarrayLength(vector<int>& nums, int k) {
        if(nums.size()==1){
            return 1;
        }
        int lo=1,hi=nums.size(),ans=1;
        if(possible(nums.size(),nums,k)){
            return nums.size();
        }
        if(!possible(2,nums,k)){
            return 1;
        }
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(possible(mid,nums,k)){
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
