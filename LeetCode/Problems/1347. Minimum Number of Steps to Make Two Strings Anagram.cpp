class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mp,mp2;
        for(auto c:s){
            mp[c]++;
        }
        for(auto c:t){
            mp2[c]++;
        }
        int cnt=0;
        for(auto it:mp){
            if(mp2.find(it.first)!=mp2.end()){
                cnt+=min(it.second,mp2[it.first]);
            }
        }
        return s.size()-cnt;
    }
};
