class Solution {
public:
    vector<long long>grid[1001];
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*>q;
        int lev=0,havNull=false;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
                TreeNode* cur=q.front();
                q.pop();
                if(cur==NULL){
                    havNull=true;
                    continue;
                }
                if(havNull){
                    return false;
                }
                if(cur->left){
                    q.push(cur->left);
                }
                else{
                    q.push(NULL);
                }
                if(cur->right){
                    q.push(cur->right);
                }
                else{
                    q.push(NULL);
                }
            }
        }
        return true;
    }
};
