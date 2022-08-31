class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        vector< pair<int,int> >vec;
        for(auto it:mp){
            vec.push_back({it.second,it.first});
        }
        sort(vec.begin(),vec.end());
        vector<int>ans;
        for(int i=vec.size()-1;k;i--,k--){
            ans.push_back(vec[i].second);
        }
        return ans;
    }
};
