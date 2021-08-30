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
    int kthSmallest(TreeNode* root, int k) {
        trav(root);
        sort(vec.begin(),vec.end());
        return vec[k-1];
    }
};
