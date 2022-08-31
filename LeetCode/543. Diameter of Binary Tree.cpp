class Solution {
public:
    map<TreeNode*,vector<TreeNode*>>grid;
    unordered_map<TreeNode*,int>dis;
    void dfs(TreeNode* cur,int d){
        d++;
        if(cur->left==NULL && cur->right==NULL){
            dis[cur]=d;
            return;
        }
        if(cur->left){
            grid[cur].push_back(cur->left);
            grid[cur->left].push_back(cur);
            dfs(cur->left,d);
        }
        if(cur->right){
            grid[cur].push_back(cur->right);
            grid[cur->right].push_back(cur);
            dfs(cur->right,d);
        }
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root,0);
        int mx=0;
        TreeNode* st=NULL;
        for(auto it:dis){
            if(it.second>mx){
                mx=it.second;
                st=it.first;
            }
        }
        dis.clear();
        queue<TreeNode*>q;
        unordered_map<TreeNode*,bool>vis;
        q.push(st);
        dis[st]=0;
        vis[st]=true;
        while(!q.empty()){
            TreeNode* u=q.front();
            q.pop();
            for(auto v:grid[u]){
                if(!vis[v]){
                    vis[v]=true;
                    dis[v]=dis[u]+1;
                    q.push(v);
                }
            }
        }
        mx=0;
        for(auto it:dis){
            mx=max(mx,it.second);
        }
        return mx;
    }
};
