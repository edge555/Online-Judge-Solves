class Solution {
public:
    map<int,vector<int>>grid;
    unordered_map<int,bool>vis;
    void trav(TreeNode* cur){
        if(cur==NULL){
            return;
        }
        if(cur->right){
            grid[cur->val].push_back(cur->right->val);
            grid[cur->right->val].push_back(cur->val);
            trav(cur->right);
        }
        if(cur->left){
            grid[cur->val].push_back(cur->left->val);
            grid[cur->left->val].push_back(cur->val);
            trav(cur->left);
        }
    }

    int findDistance(TreeNode* root, int p, int q) {
        if(p==q){
            return 0;
        }
        trav(root);
        queue<pair<int,int>>qq;
        qq.push({p,0});
        vis[p]=true;
        while(!qq.empty()){
            pair<int,int>p=qq.front();
            qq.pop();
            int u=p.first;
            if(u==q){
                return p.second;
            }
            for(auto v:grid[u]){
                if(!vis[v]){
                    vis[v]=true;
                    qq.push({v,p.second+1});
                }
            }
        }
        return 0;
    }
};
