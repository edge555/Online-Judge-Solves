class Solution {
public:
    vector<vector<int>>grid[100005];
    unordered_set<int>all,track;
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        for(auto v:descriptions){
            all.insert(v[0]);
            all.insert(v[1]);
            track.insert(v[1]);
            grid[v[0]].push_back(v);
        }
        int rootnum=-1;
        for(auto x:all){
            if(track.find(x)==track.end()){
                rootnum=x;
                break;
            }
        }
        TreeNode* root=new TreeNode(rootnum);
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* cur=q.front();
            q.pop();
            int u=cur->val;
            for(auto vec:grid[u]){
                int v=vec[1];
                TreeNode* newnode=new TreeNode(v);
                if(vec[2]==1){
                    cur->left=newnode;
                }
                else{
                    cur->right=newnode;
                }
                q.push(newnode);
            }
        }
        return root;
    }
};
