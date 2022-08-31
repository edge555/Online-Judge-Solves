class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int>mp;
        for(auto x:edges){
            mp[x[0]]++;
            mp[x[1]]++;
        }
        for(auto it:mp){
            if(it.second>1){
                return it.first;
            }
        }
        return -1;
    }
};
