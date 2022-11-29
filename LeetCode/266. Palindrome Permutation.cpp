class Solution {
public:
    bool canPermutePalindrome(string s) {
        unordered_map<char,int>mp;
        for(auto c:s){
            mp[c]++;
        }
        int odd=0;
        for(auto x:mp){
            odd+=x.second%2;
        }
        return odd<=1;
    }
};
