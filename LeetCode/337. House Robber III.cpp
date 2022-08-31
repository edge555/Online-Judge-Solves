class Solution {
public:
    map<pair<TreeNode*,bool>,int>mp;
    int func(TreeNode* cur,int taken){
        if(!cur){
            return 0;
        }
        if(cur->left==NULL && cur->right==NULL){
            if(taken){
                return 0;
            }
            else{
                return cur->val;
            }
        }
        if(mp.find({cur,taken})!=mp.end()){
            return mp[{cur,taken}];
        }
        int ans=0,ans2=0;
        if(taken){
            ans=func(cur->left,false)+func(cur->right,false);
        }
        else{
            ans=cur->val+func(cur->left,true)+func(cur->right,true);
            ans2=func(cur->left,false)+func(cur->right,false);
        }
        return mp[{cur,taken}]=max(ans,ans2);
    }
    int rob(TreeNode* root) {
        return func(root,false);
    }
};
