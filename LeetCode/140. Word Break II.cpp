class Solution {
public:
    unordered_set<string>st;
    vector<string>ans;
    void dfs(int ind,string temp,string &s,string cur){
        if(ind>=s.size()){
            cur.pop_back();
            ans.push_back(cur);
            return;
        }
        for(int i=ind;i<s.size();i++){
            temp+=s[i];
            if(st.find(temp)!=st.end()){
                string p=cur+temp+" ";
                dfs(i+1,"",s,p);
            }
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        for(auto s:wordDict){
            st.insert(s);
        }
        dfs(0,"",s,"");
        return ans;
    }
};
