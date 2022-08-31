class Solution {
public:
    string ans="";
    void dfs(TreeNode* cur,string s){
        s+=char('a'+cur->val);
        if(cur->left==NULL && cur->right==NULL){
            reverse(s.begin(),s.end());
            if(ans==""){
                ans=s;
            }
            else{
                ans=min(ans,s);
            }
            return;
        }
        else{
            if(cur->left!=NULL){
                dfs(cur->left,s);
            }
            if(cur->right!=NULL){
                dfs(cur->right,s);
            }
        }
    }
    string smallestFromLeaf(TreeNode* root) {
        dfs(root,"");
        return ans;
    }
};
