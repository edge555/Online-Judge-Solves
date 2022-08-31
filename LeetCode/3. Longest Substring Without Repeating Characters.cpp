class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mp;
        int i,j,ans=0;
        for(i=0,j=0;i<s.size();i++)
        {
            mp[s[i]]++;
            while(mp[s[i]]>1)
            {
                mp[s[j]]--;
                j++;
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};
