class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string t="";
        for(auto x:words){
            if(t.size()>=s.size()){
                break;
            }
            t+=x;
        }
        return s==t;
    }
};
