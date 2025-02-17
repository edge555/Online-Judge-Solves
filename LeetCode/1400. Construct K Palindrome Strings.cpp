class Solution {
public:
    bool canConstruct(string s, int k) {
        if(k>s.size()){
            return false;
        }
        unordered_map<char,int>mp;
        for(auto c:s){
            mp[c]++;
        }
        int odd=0;
        for(auto it:mp){
            odd+=it.second&1;
        }
        return odd<=k;
    }
};
