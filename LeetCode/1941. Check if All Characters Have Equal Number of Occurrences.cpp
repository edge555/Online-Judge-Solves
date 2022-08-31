class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>mp;
        for(auto c:s){
            mp[c]++;
        }
        auto it=mp.begin();
        int last=it->second;
        for(auto it:mp){
            if(it.second!=last){
                return false;
            }
        }
        return true;
    }
};
