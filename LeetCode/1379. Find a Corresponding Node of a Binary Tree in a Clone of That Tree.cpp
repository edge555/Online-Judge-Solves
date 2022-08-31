class Solution {
public:
    TreeNode* ans;
    void trav(TreeNode* cur,int k){
        if(cur->val==k){
            ans=cur;
            return;
        }
        if(cur->left==NULL && cur->right==NULL){
            return;
        }
        if(cur->left){
            trav(cur->left,k);
        }
        if(cur->right){
            trav(cur->right,k);
        }
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        trav(cloned,target->val);
        return ans;
    }
};
