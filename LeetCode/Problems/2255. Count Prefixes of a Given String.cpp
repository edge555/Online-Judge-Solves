class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        unordered_map<string,int>mp;
        for(auto s:words){
            mp[s]++;
        }
        int cnt=0;
        string t="";
        for(auto c:s){
            t+=c;
            cnt+=mp[t];
        }
        return cnt;
    }
};
