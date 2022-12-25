class Solution {
public:
    vector<int>vec[2000];

    vector<vector<int>> verticalOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        queue<pair<TreeNode*,int>>q;
        q.push({root,1000});
        while(!q.empty()){
            pair<TreeNode*,int>p=q.front();
            q.pop();
            TreeNode* cur=p.first;
            int lvl=p.second;
            vec[lvl].push_back(cur->val);
            if(cur->left){
                q.push({cur->left,lvl-1});
            }
            if(cur->right){
                q.push({cur->right,lvl+1});
            }
        }
        for(int i=0;i<2000;i++){
            if(vec[i].size()){
                ans.push_back(vec[i]);
            }
        }
        return ans;
    }
};
