class Solution {
public:
    vector<int>ans;
    vector<int>grid[501];
    bool vis[501];
    void trav(TreeNode* cur){
        if(cur->left==NULL && cur->right==NULL){
            return;
        }
        if(cur->left){
            grid[cur->val].push_back(cur->left->val);
            grid[cur->left->val].push_back(cur->val);
            trav(cur->left);
        }
        if(cur->right){
            grid[cur->val].push_back(cur->right->val);
            grid[cur->right->val].push_back(cur->val);
            trav(cur->right);
        }
    }
    void dfs(int u,int depth,int k){
        vis[u]=true;
        if(depth==k){
            ans.push_back(u);
            return;
        }
        for(auto v:grid[u]){
            if(!vis[v]){
                dfs(v,depth+1,k);
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        trav(root);
        memset(vis,false,sizeof(vis));
        dfs(target->val,0,k);
        return ans;
    }
};
