class Solution {
public:
    vector<int> distinctNumbers(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<k;i++){
            mp[nums[i]]++;
        }
        int st=0,en=k-1;
        ans.push_back(mp.size());
        while(en<nums.size()-1){
            mp[nums[st]]--;
            if(mp[nums[st]]==0){
                mp.erase(mp.find(nums[st]));
            }
            st++;
            mp[nums[++en]]++;
            ans.push_back(mp.size());
        }
        return ans;
    }
};
