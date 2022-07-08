class Solution {
public:
    int sum=0;
    void dfs(TreeNode* cur,TreeNode* prev,TreeNode* prevPrev){
        if(prevPrev!=NULL){
            if(prevPrev->val%2==0){
                sum+=cur->val;
            }
        }
        if(cur->left==NULL && cur->right==NULL){
            return;
        }
        if(cur->left){
            dfs(cur->left,cur,prev);
        }
        if(cur->right){
            dfs(cur->right,cur,prev);
        }
    }
    int sumEvenGrandparent(TreeNode* root) {
        dfs(root,NULL,NULL);
        return sum;
    }
};
