class Solution {
public:
    bool ans=true;
    void trav(TreeNode* cur,TreeNode* cur2){
        if((cur==NULL && cur2) || (cur && cur2==NULL)){
            ans=false;
            return;
        }
        if(cur==NULL && cur2==NULL){
            return;
        }
        if(cur->val!=cur2->val){
            ans=false;
            return;
        }
        if((cur->left && cur2->right==NULL) || (cur->left==NULL && cur2->right)){
            ans=false;
            return;
        }
        trav(cur->left,cur2->right);
        if((cur->right && cur2->left==NULL) || (cur->right==NULL && cur2->left)){
            ans=false;
            return;
        }
        trav(cur->right,cur2->left);
    }
    bool isSymmetric(TreeNode* root) {
        trav(root->left,root->right);
        return ans;
    }
};
