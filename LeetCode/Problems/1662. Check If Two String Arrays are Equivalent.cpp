class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s="",t="";
        for(auto a:word1){
            s+=a;
        }
        for(auto b:word2){
            t+=b;
        }
        return s==t;
    }
};
