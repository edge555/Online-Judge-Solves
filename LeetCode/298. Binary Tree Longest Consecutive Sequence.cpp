class Solution {
public:
    int mx=0;
    void trav(TreeNode* cur,int cnt){
        mx=max(mx,cnt);
        if(cur->left){
            int r=1;
            if(cur->left->val==cur->val+1){
                r=cnt+1;
            }
            trav(cur->left,r);
        }
        if(cur->right){
            int r=1;
            if(cur->right->val==cur->val+1){
                r=cnt+1;
            }
            trav(cur->right,r);
        }
    }
    int longestConsecutive(TreeNode* root) {
        trav(root,1);
        return mx;
    }
};
