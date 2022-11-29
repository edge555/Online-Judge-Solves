class Solution {
public:
    vector<int>grid[50005];
    vector<int> killProcess(vector<int>& pid, vector<int>& ppid, int kill) {
        int n=pid.size();
        for(int i=0;i<n;i++){
            int v=pid[i];
            int u=ppid[i];
            grid[u].push_back(v);
        }
        vector<int>vec;
        queue<pair<int,bool>>q;
        q.push({0,false});
        while(!q.empty()){
            pair<int,bool>p=q.front();
            q.pop();
            int u=p.first;
            bool f=p.second;
            if(u==kill){
                f=true;
            }
            if(f){
                vec.push_back(u);
            }
            for(auto v:grid[u]){
                q.push({v,f});
            }
        }
        return vec;
    }
};
