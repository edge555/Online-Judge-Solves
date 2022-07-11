class Solution {
public:
    unordered_map<int,int>mp;
    void trav(TreeNode* cur){
        mp[cur->val]++;
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
    bool findTarget(TreeNode* root, int k) {
        trav(root);
        for(auto it:mp){
            if(k&1){
               if(mp.find(k-it.first)!=mp.end()){
                   return true;
               }
            }
            else{
                if(it.first*2==k){
                    if(it.second>1){
                        return true;
                    }
                }
                else if(mp.find(k-it.first)!=mp.end()){
                    return true;
                }
            }
        }
        return false;
    }
};
