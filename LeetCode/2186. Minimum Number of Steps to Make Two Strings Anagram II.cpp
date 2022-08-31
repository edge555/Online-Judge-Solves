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
        for(char c='a';c<='z';c++){
            cnt+=abs(mp[c]-mp2[c]);
        }
        return cnt;
    }
};
