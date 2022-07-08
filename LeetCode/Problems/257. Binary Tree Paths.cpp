class Solution {
public:
    vector<string>vec;
    void dfs(TreeNode* cur,string s){
        if(s.empty()){
            s+=to_string(cur->val);
        }
        else{
            s+="->"+to_string(cur->val);
        }
        if(cur->left==NULL && cur->right==NULL){
            vec.push_back(s);
            return;
        }
        if(cur->left!=NULL){
            dfs(cur->left,s);
        }
        if(cur->right!=NULL){
            dfs(cur->right,s);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        dfs(root,"");
        return vec;
    }
};
