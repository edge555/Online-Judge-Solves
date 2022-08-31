class Solution {
public:
    bool f = false;
    void trav(TreeNode* cur,int sum, int targetSum){
        if(cur == NULL){
            return;
        }
        if(cur->left == NULL && cur->right == NULL){
            if(sum + cur->val == targetSum){
                f=true;
            }
            return;
        }
        if(cur->left){
            trav(cur->left,sum+cur->val,targetSum);
        }
        if(cur->right){
            trav(cur->right, sum+cur->val,targetSum);
        }
        return;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        trav(root,0,targetSum);
        if(root == NULL){
            return false;
        }
        return f;
    }
};
