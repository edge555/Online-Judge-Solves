class Solution {
public:
    unordered_map<int,int>depth;
    unordered_map<int,TreeNode*>parent;
    void dfs(TreeNode* from,TreeNode* u,int dep){
        parent[u->val]=from;
        depth[u->val]=dep;
        if(u->left){
            if(u->left->val!=from->val){
                dfs(u,u->left,dep+1);
            }
        }
        if(u->right){
            if(u->right->val!=from->val){
                dfs(u,u->right,dep+1);
            }
        }
    }
    TreeNode* lca(TreeNode* u,TreeNode* v)
    {
        if(depth[u->val]>depth[v->val]){
            swap(u,v);
        }
        while(depth[v->val]>depth[u->val]){
            v=parent[v->val];
        }
        while(u->val!=v->val){
            u=parent[u->val];
            v=parent[v->val];
        }
        return u;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
        dfs(root,root,1);
        if(!depth[p->val] || !depth[q->val]){
            return NULL;
        }
        if(p->val==root->val || q->val==root->val){
            return root;
        }
        return lca(p,q);
    }
};
