class Solution {
public:
    bool makePalindrome(string s) {
        if(s.size()<=3){
            return true;
        }
        int i=0,j=s.size()-1,cnt=0;
        while(i<j){
            if(s[i]!=s[j]){
                cnt++;
            }
            if(cnt>2){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
