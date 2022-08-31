class Solution {
public:
    vector<int>ans;
    void trav(TreeNode* cur){
        if(cur==NULL){
            return;
        }
        ans.push_back(cur->val);
        trav(cur->left);
        trav(cur->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        trav(root1);
        trav(root2);
        sort(ans.begin(),ans.end());
        return ans;
    }
};