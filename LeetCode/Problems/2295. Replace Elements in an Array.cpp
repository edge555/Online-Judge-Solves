class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int,int>mp,rmp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for(auto v:operations){
            int x=v[0],y=v[1];
            int ind=mp[x];
            nums[ind]=y;
            mp.erase(mp.find(x));
            mp[y]=ind;
        }
        return nums;
    }
};
