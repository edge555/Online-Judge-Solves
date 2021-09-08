class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        map<int,int>mp,par;
        queue<pair<TreeNode*,pair<int,int> > >q;
        q.push({root,{1,-1}});
        par[1]=-1;
        mp[1]=1;
        while(!q.empty())
        {
            pair<TreeNode*,pair<int,int>>p = q.front();
            q.pop();
            TreeNode* cur=p.first;
            pair<int,int> pp = p.second;
            int lev=pp.first;
            int parent=pp.second;
            mp[cur->val]=lev;
            par[cur->val]=parent;
            if(cur->left!=NULL){
                q.push({cur->left,{lev+1,cur->val}});
            }
            if(cur->right!=NULL){
                q.push({cur->right,{lev+1,cur->val}});
            }
        }
        return mp[x]==mp[y] && par[x]!=par[y];
    }
};
