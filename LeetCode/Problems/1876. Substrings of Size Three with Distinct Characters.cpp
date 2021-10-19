class Solution {
public:
    int countGoodSubstrings(string s) {
        int cnt=0;
        if(s.size()<3){
            return cnt;
        }
        for(int i=0;i<=s.size()-3;i++){
            if(s[i]!=s[i+1] && s[i]!=s[i+2] && s[i+1]!=s[i+2]){
                cnt++;
            }
        }
        return cnt;
    }
};
