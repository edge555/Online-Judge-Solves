class Solution {
public:
    vector<int>vec;
    void trav(TreeNode* cur){
        if(cur==NULL){
            return;
        }
        vec.push_back(cur->val);
        trav(cur->left);
        trav(cur->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        trav(root);
        return vec;
    }
};
