class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mp,mp2;
        for(auto c:s){
            mp[c]++;
        }
        for(auto c:t){
            mp2[c]++;
        }
        return mp==mp2;
    }
};
