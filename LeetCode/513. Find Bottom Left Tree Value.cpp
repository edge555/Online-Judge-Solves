class Solution {
public:
    int d=0,ans=0;
    void trav(TreeNode* cur,int depth){
        if(cur->left==NULL && cur->right==NULL){
            return;
        }
        if(cur->left){
            if(depth+1>d){
                d=depth+1;
                ans=cur->left->val;
            }
            trav(cur->left,depth+1);
        }
        if(cur->right){
            if(depth+1>d){
                d=depth+1;
                ans=cur->right->val;
            }
            trav(cur->right,depth+1);
        }
    }
    int findBottomLeftValue(TreeNode* root) {
        ans=root->val;
        trav(root,0);
        return ans;
    }
};
