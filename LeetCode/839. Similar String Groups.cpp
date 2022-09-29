class Solution {
public:
    unordered_map<string,int>mp;
    vector<int>grid[301];
    bool vis[301];
    bool func(string &a,string &b){
        int cnt=0;
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]){
                cnt++;
            }
            if(cnt==3){
                return false;
            }
        }
        return true;
    }
    void dfs(int u){
        vis[u]=true;
        for(auto v:grid[u]){
            if(!vis[v]){
                dfs(v);
            }
        }
    }
    int numSimilarGroups(vector<string>& strs) {
        for(int i=0;i<strs.size();i++){
            mp[strs[i]]=i;
        }
        for(int i=0;i<strs.size()-1;i++){
            int x=mp[strs[i]];
            for(int j=i+1;j<strs.size();j++){
                if(func(strs[i],strs[j])){
                    int y=mp[strs[j]];
                    grid[x].push_back(y);
                    grid[y].push_back(x);
                }
            }
        }
        int cnt=0;
        for(int i=0;i<strs.size();i++){
            int x=mp[strs[i]];
            if(!vis[x]){
                dfs(x);
                cnt++;
            }
        }
        return cnt;
    }
};
