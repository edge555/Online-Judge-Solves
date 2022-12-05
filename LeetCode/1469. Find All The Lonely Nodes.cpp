class Solution {
public:
    vector<int> getLonelyNodes(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<int>vec;
        while(!q.empty()){
            TreeNode* p=q.front();
            q.pop();
            bool f=false;
            if(p->left==NULL || p->right==NULL){
                f=true;
            }
            if(f){
                if(p->left!=NULL){
                    vec.push_back(p->left->val);
                }
                if(p->right!=NULL){
                    vec.push_back(p->right->val);
                }
            }
            if(p->left!=NULL){
                q.push(p->left);
            }
            if(p->right!=NULL){
                q.push(p->right);
            }
        }
        return vec;
    }
};
