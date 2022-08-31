class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        for(auto c:s){
            mp[c]++;
        }
        bool f=false;
        int ans=0,mx=0;
        for(auto it:mp){
            if(it.second&1){
                f=true;
                ans+=(it.second-1);
            }
            else {
                ans+=it.second;
            }
        }
        if(f)
            ans++;
        return ans;
    }
};
