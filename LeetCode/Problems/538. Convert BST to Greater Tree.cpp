class Solution {
public:
    vector<int>vec;
    int sum=0;
    unordered_map<int,int>mp;
    void trav(TreeNode* cur){
        vec.push_back(cur->val);
        sum+=cur->val;
        if(cur->left==NULL && cur->right==NULL){
            return;
        }
        if(cur->left){
            trav(cur->left);
        }
        if(cur->right){
            trav(cur->right);
        }
    }
    void trav2(TreeNode* cur){
        cur->val=mp[cur->val];
        if(cur->left==NULL && cur->right==NULL){
            return;
        }
        if(cur->left){
            trav2(cur->left);
        }
        if(cur->right){
            trav2(cur->right);
        }
    }
    TreeNode* convertBST(TreeNode* root) {
        if(root==NULL){
            return NULL;
        }
        trav(root);
        sort(vec.begin(),vec.end());
        int cursum=0;
        for(auto x:vec){
            mp[x]=sum-cursum;
            cursum+=x;
        }
        trav2(root);
        return root;
    }
};
