class Solution {
public:
    int sum=0;
    void trav(TreeNode* cur){
        if(cur==NULL){
            return;
        }

        if(cur->left){
            if(cur->left->left==NULL && cur->left->right==NULL){
                sum+=cur->left->val;
            }
            trav(cur->left);
        }

        if(cur->right){
            trav(cur->right);
        }
    }
    int sumOfLeftLeaves(TreeNode* root) {
        trav(root);
        return sum;
    }
};
