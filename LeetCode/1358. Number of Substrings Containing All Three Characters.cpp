class Solution {
public:
    int numberOfSubstrings(string s) {
        int i=0,j=0,cnt=0;
        unordered_map<char,int>mp;
        while(j<s.size()){
            mp[s[j]]++;
            if(mp.size()==3){
                while(mp.size()==3){
                    cnt+=s.size()-j;
                    mp[s[i]]--;
                    if(mp[s[i]]==0){
                        mp.erase(s[i]);
                    }
                    i++;
                }
            }
            j++;
        }
        return cnt;
    }
};
