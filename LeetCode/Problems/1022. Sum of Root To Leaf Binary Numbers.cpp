class Solution {
public:
    long long sum=0;
    void trav(TreeNode* cur, string num){
        if(cur->left==NULL && cur->right==NULL){
            num+=char(cur->val+48);
            sum+=stoi(num, 0, 2);
            return;

        }
        else{
            num+=char(cur->val+48);
            if(cur->right){
                trav(cur->right,num);
            }
            if(cur->left){
                trav(cur->left,num);
            }
        }
        return;
    }
    int sumRootToLeaf(TreeNode* root) {
        trav(root,"");
        return sum;
    }
};
