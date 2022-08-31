class Solution {
public:
    vector<int>grid[100005];
    bool vis[100005];
    void trav(TreeNode* cur){
        if(cur==NULL){
            return;
        }
        if(cur->left){
            grid[cur->val].push_back(cur->left->val);
            grid[cur->left->val].push_back(cur->val);
            trav(cur->left);
        }
        if(cur->right){
            grid[cur->val].push_back(cur->right->val);
            grid[cur->right->val].push_back(cur->val);
            trav(cur->right);
        }
    }
    int amountOfTime(TreeNode* root, int start) {
        TreeNode* cur=root;
        trav(cur);
        queue<int>q;
        int ans=0;
        q.push(start);
        vis[start]=true;
        while(!q.empty()){
            int sz=q.size();
            ans++;
            while(sz--){
                int u=q.front();
                q.pop();
                for(auto v:grid[u]){
                    if(!vis[v]){
                        vis[v]=true;
                        q.push(v);
                    }
                }
            }
        }
        return ans-1;
    }
};
