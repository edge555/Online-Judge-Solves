class Solution {
public:
    bool f = true;
    void trav(TreeNode* p, TreeNode* q){
        if(p == NULL && q== NULL){
            return;
        }
        if((p== NULL && q != NULL) || (p!=NULL && q == NULL)){
            f=false;
            return;
        }
        if(p->val != q->val){
            f=false;
            return;
        }
        else{
            trav(p->left, q->left);
            trav(p->right, q->right);
            return;
        }

    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        trav(p,q);
        return f;
    }
};
