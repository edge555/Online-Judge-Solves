class Solution {
public:
    int ans;
    void trav(TreeNode* cur,int dep){
        ans=max(ans,dep);
        if(cur->left!=NULL){
            trav(cur->left,dep+1);
        }
        if(cur->right!=NULL){
            trav(cur->right,dep+1);
        }
        return;
    }
    int maxDepth(TreeNode* root) {
        ans=0;
        if(root==NULL){
            return 0;
        }
        trav(root,1);
        return ans;
    }
};
