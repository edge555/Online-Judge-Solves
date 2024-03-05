class Solution {
public:
    int cnt=0;
    int trav(TreeNode* cur){
        if(cur==NULL){
            return 0;
        }
        int sum=(trav(cur->left)+trav(cur->right))%1000000007;
        cnt+=cur->val==sum;
        return cur->val+sum;
    }
    int equalToDescendants(TreeNode* root) {
        trav(root);
        return cnt;
    }
};
