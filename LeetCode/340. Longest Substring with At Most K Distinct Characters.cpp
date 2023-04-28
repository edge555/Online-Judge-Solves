class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        if(k==0){
            return 0;
        }
        unordered_map<char,int>mp;
        int st=0,ans=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            while(mp.size()>k){
                mp[s[st]]--;
                if(mp[s[st]]==0){
                    mp.erase(mp.find(s[st]));
                }
                st++;
            }

           ans=max(ans,i-st+1);
        }
        return ans;
    }
};
