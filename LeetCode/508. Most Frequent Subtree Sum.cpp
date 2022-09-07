class Solution {
public:
    unordered_map<int,int>mp;
    map<TreeNode*,int>sum;
    void trav(TreeNode* cur){
        sum[cur]=cur->val;
        if(cur->left){
            trav(cur->left);
            sum[cur]+=sum[cur->left];
        }
        if(cur->right){
            trav(cur->right);
            sum[cur]+=sum[cur->right];
        }
        mp[sum[cur]]++;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        trav(root);
        int mx=-1;
        for(auto it:mp){
            mx=max(mx,it.second);
        }
        vector<int>vec;
        for(auto it:mp){
            if(it.second==mx){
                vec.push_back(it.first);
            }
        }
        return vec;
    }
};
