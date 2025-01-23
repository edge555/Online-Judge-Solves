class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>>mp;
        vector<vector<int>>vec;
        for(int i=0;i<groupSizes.size();i++){
            if(mp.find(groupSizes[i])==mp.end()){
                mp[groupSizes[i]]={};
                mp[groupSizes[i]].push_back(i);
                if(mp[groupSizes[i]].size()==groupSizes[i]){
                    vec.push_back(mp[groupSizes[i]]);
                    mp[groupSizes[i]].clear();
                }
            }
            else{
                mp[groupSizes[i]].push_back(i);
                if(mp[groupSizes[i]].size()==groupSizes[i]){
                    vec.push_back(mp[groupSizes[i]]);
                    mp[groupSizes[i]].clear();
                }
            }
        }
        return vec;
    }
};
