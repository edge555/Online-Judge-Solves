class Solution {
public:
    map<TreeNode*,int>mp;
    void trav(TreeNode* cur){
        if(cur==NULL){
            return;
        }
        mp[cur]=cur->val;
        if(cur->left!=NULL){
            trav(cur->left);
            mp[cur]+=mp[cur->left];
        }
        if(cur->right!=NULL){
            trav(cur->right);
            mp[cur]+=mp[cur->right];
        }
    }
    TreeNode* pruneTree(TreeNode* root) {
        trav(root);
        if(mp[root]==0){
            return NULL;
        }
        TreeNode* temp=root;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* cur=q.front();
            q.pop();
            if(cur->left!=NULL){
                if(mp[cur->left]>0){
                    q.push(cur->left);
                }
                else{
                    cur->left=NULL;
                }
            }
            if(cur->right!=NULL){
                if(mp[cur->right]>0){
                    q.push(cur->right);
                }
                else{
                    cur->right=NULL;
                }
            }
        }
        return temp;
    }
};
