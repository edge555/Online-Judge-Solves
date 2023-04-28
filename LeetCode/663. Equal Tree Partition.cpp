class Solution {
public:
    map<TreeNode*,int>mp;
    unordered_map<int,int>ump;
    int trav(TreeNode* cur){
        if(!cur){
            return 0;
        }
        int cnt=cur->val+trav(cur->left)+trav(cur->right);
        mp[cur]=cnt;
        ump[cnt]++;
        return cnt;
    }
    bool checkEqualTree(TreeNode* root) {
        int sum=trav(root);
        if(sum&1){
            return false;
        }
        if(sum==0){
            return ump[0]>1;
        }
        return ump.count(sum>>1);
    }
};
