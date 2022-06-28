class Solution {
public:
    vector<int>grid[100005];
    bool vis[100005];
    string temp="";
    vector<int>inds;
    void dfs(int ind,string &s){
        vis[ind]=true;
        inds.push_back(ind);
        temp+=s[ind];
        for(auto x:grid[ind]){
            if(!vis[x]){
                dfs(x,s);
            }
        }
    }
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        memset(vis,false,sizeof(vis));
        for(auto v:pairs){
            grid[v[0]].push_back(v[1]);
            grid[v[1]].push_back(v[0]);
        }
        for(int i=0;i<s.size();i++){
            if(!vis[i]){
                temp="";
                inds.clear();
                dfs(i,s);
                sort(temp.begin(),temp.end());
                sort(inds.begin(),inds.end());
                for(int j=0;j<temp.size();j++){
                    s[inds[j]]=temp[j];
                }
            }
        }
        return s;
    }
};
