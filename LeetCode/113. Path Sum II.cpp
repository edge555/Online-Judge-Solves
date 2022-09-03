class Solution {
public:
    vector<vector<int>>ans;
    void func(TreeNode* cur,int sum,vector<int>&vec,int x){
        if(cur==NULL){
            return;
        }
        int p=sum+cur->val;
        vector<int>temp=vec;
        temp.push_back(cur->val);
        if(p==x && cur->left==NULL && cur->right==NULL){
            ans.push_back(temp);
            return;
        }
        if(cur->left){
            func(cur->left,sum+cur->val,temp,x);
        }
        if(cur->right){
            func(cur->right,sum+cur->val,temp,x);
        }
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root==NULL){
            return ans;
        }
        vector<int>temp;
        func(root,0,temp,targetSum);
        return ans;
    }
};
