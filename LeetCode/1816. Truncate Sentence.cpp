class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream ss(s);
        string a,t="";
        while(k--){
            ss>>a;
            t+=a+" ";
        }
        t.pop_back();
        return t;
    }
};
