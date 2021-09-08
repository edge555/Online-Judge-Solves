class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector< vector<int> >ans;
        if(root==NULL){
            return ans;
        }
        vector<int>vec;
        queue<pair<TreeNode*,int> >q;
        int last=-1;
        q.push({root,1});
        while(!q.empty())
        {
            pair<TreeNode*,int>p = q.front();
            q.pop();
            TreeNode* cur=p.first;
            int lev=p.second;
            if(lev!=last)
            {
                if(!vec.empty()){
                    ans.push_back(vec);
                    vec.clear();
                    last=lev;
                }
            }
            vec.push_back(cur->val);
            if(cur->left!=NULL){
                q.push({cur->left,lev+1});
            }
            if(cur->right!=NULL){
                q.push({cur->right,lev+1});
            }
        }
        if(!vec.empty()){
            ans.push_back(vec);
        }
        return ans;
    }
};
