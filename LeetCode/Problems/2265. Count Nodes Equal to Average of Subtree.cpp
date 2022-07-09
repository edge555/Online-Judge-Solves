class Solution {
public:
    unordered_map<TreeNode*,int>cnt,sum;
    int ans=0;
    void dfs(TreeNode* cur){
        cnt[cur]=1;
        sum[cur]=cur->val;
        if(cur->left){
            dfs(cur->left);
            cnt[cur]+=cnt[cur->left];
            sum[cur]+=sum[cur->left];
        }
        if(cur->right){
            dfs(cur->right);
            cnt[cur]+=cnt[cur->right];
            sum[cur]+=sum[cur->right];
        }
        ans+=(sum[cur]/cnt[cur]==cur->val);
    }
    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
