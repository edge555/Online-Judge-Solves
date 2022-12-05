class Solution {
public:
    TreeNode* findNearestRightNode(TreeNode* root, TreeNode* u) {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
            bool f=false;
            while(sz--){
                TreeNode* v=q.front();
                q.pop();
                if(f){
                    return v;
                }
                if(v->left){
                    q.push(v->left);
                }
                if(v->right){
                    q.push(v->right);
                }
                if(v->val==u->val){
                    f=true;
                }
            }
            if(f){
                break;
            }
        }
        return NULL;
    }
};
