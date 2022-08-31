class Solution {
public:
    long long ans[10005];
    void dfs(TreeNode* cur,int depth){
        ans[depth]=max(ans[depth],1LL*cur->val);
        if(cur->left==NULL && cur->right==NULL){
            return;
        }
        if(cur->left){
            dfs(cur->left,depth+1);
        }
        if(cur->right){
            dfs(cur->right,depth+1);
        }
    }
    vector<int> largestValues(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        for(int i=0;i<10004;i++){
            ans[i]=-1e18;
        }
        dfs(root,0);
        vector<int>vec;
        for(int i=0;;i++){
            if(ans[i]==-1e18){
                break;
            }
            vec.push_back(ans[i]);
        }
        return vec;
    }
};
