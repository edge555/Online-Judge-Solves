class Solution {
public:
    vector<int>vec;
    void trav(TreeNode* cur){
        if(cur==NULL){
            return;
        }
        trav(cur->left);
        vec.push_back(cur->val);
        trav(cur->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        trav(root);
        return vec;
    }
};
