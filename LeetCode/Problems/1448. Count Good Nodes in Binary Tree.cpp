class Solution {
public:
    int cnt=0;
    void dfs(TreeNode* cur,int mx){
        mx=max(mx,cur->val);
        if(mx<=cur->val){
            cnt++;
        }
        if(cur->left==NULL && cur->right==NULL){
            return;
        }
        if(cur->left){
            dfs(cur->left,mx);
        }
        if(cur->right){
            dfs(cur->right,mx);
        }
    }
    int goodNodes(TreeNode* root) {
        dfs(root,INT_MIN);
        return cnt;
    }
};
