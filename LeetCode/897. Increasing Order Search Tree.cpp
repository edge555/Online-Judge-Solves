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
    TreeNode* makeTree(vector<int>&vec){
        TreeNode* cur=NULL;
        TreeNode* root=NULL;
        if(vec.empty()){
            return cur;
        }
        cur=new TreeNode(vec[0]);
        root=cur;
        for(int i=1;i<vec.size();i++){
            TreeNode* temp=new TreeNode(vec[i]);
            cur->right=temp;
            cur=cur->right;
        }
        return root;
    }
    TreeNode* increasingBST(TreeNode* root) {
        trav(root);
        sort(vec.begin(),vec.end());
        return makeTree(vec);
    }
};
