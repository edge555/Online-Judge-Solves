class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int,int>freq;
        map<int,vector<int>>mp;
        for(auto v:adjacentPairs){
            int x=v[0],y=v[1];
            freq[x]++;
            freq[y]++;
            mp[x].push_back(y);
            mp[y].push_back(x);
        }
        int st=0;
        for(auto it:freq){
            if(it.second==1){
                st=it.first;
                break;
            }
        }
        vector<int>ans={st};
        freq.clear();
        freq[st]++;
        for(int i=0;i<adjacentPairs.size();i++){
            int last=ans[i];
            for(auto x:mp[last]){
                if(freq.find(x)==freq.end()){
                    freq[x]++;
                    ans.push_back(x);
                    break;
                }
            }
        }
        return ans;
    }
};
