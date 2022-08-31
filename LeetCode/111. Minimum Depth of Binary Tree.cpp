class Solution {
public:
    int ans=1000000000;
    void trav(TreeNode* cur,int dep){
        if(cur==NULL){
            return;
        }
        if(cur->left==NULL && cur->right==NULL){
            ans=min(ans,dep);
            return;
        }
        if(cur->left){
            trav(cur->left,dep+1);
        }
        if(cur->right){
            trav(cur->right,dep+1);
        }
    }
    int minDepth(TreeNode* root) {
        trav(root,1);
        return ans;
    }
};
