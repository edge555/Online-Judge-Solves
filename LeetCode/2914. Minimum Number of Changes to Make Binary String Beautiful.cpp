class Solution {
public:
    int minChanges(string s) {
        int cnt=0;
        for(int i=0;i<s.size();i+=2){
            cnt+=s[i]!=s[i+1];
        }
        return cnt;
    }
};
