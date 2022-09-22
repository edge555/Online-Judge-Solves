class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                mp[nums[i]*nums[j]]++;
            }
        }
        int cnt=0;
        for(auto it:mp){
            cnt+=(it.second*(it.second-1))>>1;
        }
        return cnt*8;
    }
};
