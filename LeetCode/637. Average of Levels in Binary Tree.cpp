class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        queue<pair<TreeNode*,int> >q;
        q.push({root,1});
        map<int,long long>sum;
        map<int,int>cnt;
        while(!q.empty())
        {
            pair<TreeNode*,int>p = q.front();
            q.pop();
            TreeNode* cur=p.first;
            int lev=p.second;
            sum[lev]+=cur->val;
            cnt[lev]++;
            if(cur->left!=NULL){
                q.push({cur->left,lev+1});
            }
            if(cur->right!=NULL){
                q.push({cur->right,lev+1});
            }
        }
        vector<double>ans;
        for(auto it:cnt){
            ans.push_back(double((sum[it.first]*1.0)/it.second));
        }
        return ans;
    }
};
