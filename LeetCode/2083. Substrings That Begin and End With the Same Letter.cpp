class Solution {
public:
    long long numberOfSubstrings(string s) {
        unordered_map<char,long long>mp;
        for(auto c:s){
            mp[c]++;
        }
        long long ans=0;
        for(auto it:mp){
            ans+=(it.second*(it.second+1))>>1;
        }
        return ans;
    }
};
