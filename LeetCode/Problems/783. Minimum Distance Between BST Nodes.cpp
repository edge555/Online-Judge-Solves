class Solution {
public:
    vector<int>vec;
    void trav(TreeNode* cur){
        if(cur==NULL){
            return;
        }
        vec.push_back(cur->val);
        trav(cur->left);
        trav(cur->right);
    }
    int minDiffInBST(TreeNode* root) {
        trav(root);
        sort(vec.begin(),vec.end());
        int i,ans=1000000000;
        for(i=0;i<vec.size()-1;i++){
            ans=min(ans,vec[i+1]-vec[i]);
        }
        return ans;
    }
};
