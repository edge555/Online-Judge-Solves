class Solution {
public:
    bool alpha(char c){
        return c>='a' && c<='z' || c>='A' && c<='Z';
    }
    string reverseOnlyLetters(string s) {
        int i,j=0;
        string t="";
        for(i=0;i<s.size();i++){
            if(alpha(s[i])){
                t+=s[i];
            }
        }
        reverse(t.begin(),t.end());
        string ans="";
        for(i=0;i<s.size();i++){
            if(alpha(s[i])){
                ans+=t[j++];
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};
