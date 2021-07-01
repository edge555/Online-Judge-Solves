class Solution {
public:
    bool isPalindrome(string s) {
        string t="";
        for(auto c:s){
            if(c>='a' && c<='z'){
                t+=c;
            } else if(c>='A' && c<='Z'){
                t+=c+32;
            } else if(c>='0' && c<='9'){
                t+=c;
            }
        }
        string r=t;
        reverse(r.begin(),r.end());
        return r==t;
    }
};
