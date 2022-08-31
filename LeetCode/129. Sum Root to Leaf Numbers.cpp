class Solution {
public:
    int sum=0;
    void dfs(TreeNode* cur,int n){
        n*=10;
        n+=cur->val;
        if(cur->left==NULL && cur->right==NULL){
            sum+=n;
            return;
        }
        if(cur->left!=NULL){
            dfs(cur->left,n);
        }
        if(cur->right!=NULL){
            dfs(cur->right,n);
        }
    }
    int sumNumbers(TreeNode* root) {
        dfs(root,0);
        return sum;
    }
};
