class Solution {
public:
    string longestWord(vector<string>& words) {
        sort(words.begin(),words.end());
        unordered_set<string>st;
        string ans="";
        for(auto w:words){
            if(w.size()==1 || st.count(w.substr(0,w.size()-1))){
                if(w.size()>ans.size()){
                    ans=w;
                }
                st.insert(w);
            }
        }
        return ans;
    }
};
