class Solution {
public:
    int sum=0;
    void trav(TreeNode* cur, int low, int high){
        if(cur==NULL){
            return;
        }
        if(cur->val>=low && cur->val<=high){
            sum+=cur->val;
        }
        trav(cur->left,low,high);
        trav(cur->right,low,high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        trav(root, low, high);
        return sum;
    }
};
