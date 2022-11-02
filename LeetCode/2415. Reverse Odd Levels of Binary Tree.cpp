class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        vector<int>grid[20];
        queue<TreeNode*>q;
        q.push(root);
        int lvl=0;
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
                TreeNode* p=q.front();
                q.pop();
                grid[lvl].push_back(p->val);
                if(p->left==NULL){
                    continue;
                }
                q.push(p->left);
                q.push(p->right);
            }
            lvl++;
        }
        for(int i=1;i<20;i+=2){
            reverse(grid[i].begin(),grid[i].end());
        }
        TreeNode* ans=NULL;
        TreeNode* cur=new TreeNode(grid[0][0]);
        queue<TreeNode*>qq;
        qq.push(cur);
        ans=cur;
        for(int i=1;i<20;i++){
            if(grid[i].size()==0){
                break;
            }
            for(int j=0;j<grid[i].size();j+=2){
                TreeNode* a = new TreeNode(grid[i][j]);
                TreeNode* b = new TreeNode(grid[i][j+1]);
                TreeNode* p = qq.front();
                qq.pop();
                p->left=a;
                p->right=b;
                qq.push(a);
                qq.push(b);
            }
        }
        return ans;
    }
};
