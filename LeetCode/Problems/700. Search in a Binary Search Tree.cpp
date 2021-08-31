class Solution {
public:
    TreeNode* ans;
    void trav(TreeNode* cur,int val){
        if(cur==NULL){
            return;
        }
        else if(cur->val==val){
            ans=cur;
            return;
        }
        trav(cur->left,val);
        trav(cur->right,val);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        ans=NULL;
        trav(root,val);
        return ans;
    }
};
