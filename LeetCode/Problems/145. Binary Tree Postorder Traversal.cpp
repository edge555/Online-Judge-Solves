class Solution {
public:
    vector<int>vec;
    void trav(TreeNode* cur){
        if(cur==NULL){
            return;
        }

        trav(cur->left);
        trav(cur->right);
        vec.push_back(cur->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        trav(root);
        return vec;
    }
};
