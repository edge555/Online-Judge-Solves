class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        int ans=0;
        while(!q.empty()){
            int sz=q.size();
            int first=-1,second=-1;
            while(sz--){
                pair<TreeNode*,int>p=q.front();
                q.pop();
                if(first==-1){
                    first=p.second;
                }
                second=p.second;
                TreeNode* cur=p.first;
                if(cur->left!=NULL){
                    q.push({cur->left,(long long)p.second*2+1});
                }
                if(cur->right!=NULL){
                    q.push({cur->right,(long long)p.second*2+2});
                }

            }
            ans=max(ans,second-first+1);
        }
        return ans;
    }
};
