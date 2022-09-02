class Solution {
public:
    vector<int>vec[2001];
    vector<vector<int>>ans;
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root==NULL){
            return ans;
        }
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            pair<TreeNode*,int>p=q.front();
            q.pop();
            TreeNode* cur=p.first;
            vec[p.second].push_back(cur->val);
            if(cur->left!=NULL){
                q.push({cur->left,p.second+1});
            }
            if(cur->right!=NULL){
                q.push({cur->right,p.second+1});
            }
        }
        for(int i=0;i<2001;i++){
            if(vec[i].empty()){
                break;
            }
            ans.push_back(vec[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

};
