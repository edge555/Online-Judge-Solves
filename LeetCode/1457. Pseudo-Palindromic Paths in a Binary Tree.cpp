class Solution {
public:
    int cnt=0;
    unordered_map<TreeNode*,int>vis;
    bool check(vector<int>&mp){
        int odd=0;
        for(auto x:mp){
            odd+=x%2;
        }
        return odd<=1;
    }
    void trav(TreeNode* cur,vector<int>mp){
        vis[cur]++;
        mp[cur->val]++;
        if(cur->left==NULL && cur->right==NULL){
            cnt+=check(mp);
            return;
        }
        if(cur->left && vis.find(cur->left)==vis.end()){
            trav(cur->left,mp);
        }
        if(cur->right && vis.find(cur->right)==vis.end()){
            trav(cur->right,mp);
        }
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int>mp(10,0);
        trav(root,mp);
        return cnt;
    }
};
