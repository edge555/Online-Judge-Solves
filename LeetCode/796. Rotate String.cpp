class Solution {
public:
    bool rotateString(string s, string goal) {
        string t=s;
        t+=s;
        for(int i=0;i<=s.size();i++){
            if(t.substr(i,s.size())==goal){
                return true;
            }
        }
        return false;
    }
};
