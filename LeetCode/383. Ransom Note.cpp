class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ara[27];
        memset(ara,0,sizeof(ara));
        for(char c:magazine) {
            ara[c-97]++;
        }
        for(char c:ransomNote){
            ara[c-97]--;
        }
        for(auto x:ara){
            if (x<0){
                return false;
            }
        }
        return true;
    }
};
