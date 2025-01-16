class Solution {
public:
    int countAsterisks(string s){
        int cnt=0,cnt2=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='|'){
                cnt2++;
            }
            if(s[i]=='*' && cnt2%2==0){
                cnt++;
            }
        }
        return cnt;
    }
};
