class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>vec={
           ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."
        };
        set<string>st;
        for(auto s:words){
            string t="";
            for(auto c:s){
                t+=vec[c-'a'];
            }
            st.insert(t);
        }
        return st.size();
    }
};
