class Solution {
public:
    int cnt=0;
    void trav(TreeNode* cur){
        if(cur==NULL){
            return;
        }
        cnt++;
        trav(cur->left);
        trav(cur->right);
    }
    int countNodes(TreeNode* root) {
        trav(root);
        return cnt;
    }
};
