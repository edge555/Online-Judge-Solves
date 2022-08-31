class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int>mp,mp2;
        for(auto c:s){
            mp[c]++;
        }
        for(auto c:t){
            mp2[c]++;
        }
        for(auto it:mp2){
            if(mp[it.first]<it.second){
                return it.first;
            }
        }
        return '.';
    }
};
