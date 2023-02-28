class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        map<char,int>mp;
        int i=0,st=0,ans=1;
        while(i<s.size()){
            mp[s[i]]++;
            while(mp.size()>2){
                mp[s[st]]--;
                if(mp[s[st]]==0){
                    mp.erase(mp.find(s[st]));
                }
                st++;
            }
            ans=max(ans,i-st+1);
            i++;
        }
        return ans;
    }
};
