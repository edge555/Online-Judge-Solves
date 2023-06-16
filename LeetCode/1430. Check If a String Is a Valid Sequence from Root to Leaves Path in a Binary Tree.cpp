class Solution {
public:
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        if(root->val!=arr[0]){
            return false;
        }
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            pair<TreeNode*,int>p=q.front();
            q.pop();
            TreeNode* cur=p.first;
            int ind=p.second;
            if(ind==arr.size()){
                continue;
            }
            if(cur->val!=arr[ind]){
                continue;
            }
            if(!cur->left && !cur->right){
                if(ind==arr.size()-1){
                    return true;
                }
            }
            if(cur->left){
                q.push({cur->left,ind+1});
            }
            if(cur->right){
                q.push({cur->right,ind+1});
            }

        }
        return false;
    }
};
