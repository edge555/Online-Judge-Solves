class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>mp;
        for(auto c:s){
            mp[c]++;
        }
        string t="";
        for(auto c:order){
            while(mp[c]>0){
                t+=c;
                mp[c]--;
            }
        }
        for(char c='a';c<='z';c++){
            while(mp[c]>0){
                t+=c;
                mp[c]--;
            }
        }
        return t;
    }
};
