class Solution {
public:
    bool trav(TreeNode* cur){
        if(cur==NULL){
            return false;
        }
        bool f1=trav(cur->left);
        bool f2=trav(cur->right);
        if(cur->val==2){
            return f1 || f2;
        }
        if(cur->val==3){
            return f1 && f2;
        }
        if(cur->val==0){
            return false;
        }
        else{
            return true;
        }
    }
    bool evaluateTree(TreeNode* root) {
        return trav(root);
    }
};
