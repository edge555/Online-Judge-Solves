class Solution {
public:
    vector<string>ans;
    unordered_map<string,int>mp;
    bool f;
    void dfs(int ind,string cur,string &s,int taken){
        if(ind>=s.size()){
            if(taken>1){
                f=true;
            }
            return;
        }
        for(int i=ind;i<s.size();i++){
            cur+=s[i];
            if(mp.find(cur)!=mp.end()){
                dfs(i+1,"",s,taken+1);
            }
        }
    }
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        for(auto s:words){
            mp[s]++;
        }
        for(auto s:words){
            f=false;
            dfs(0,"",s,0);
            if(f){
                ans.push_back(s);
            }
        }
        return ans;
    }
};
