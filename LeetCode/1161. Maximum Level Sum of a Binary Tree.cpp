class Solution {
public:
    map<int,int>mp;
    void trav(TreeNode* cur,int depth){
        if(cur==NULL){
            return;
        }
        mp[depth]+=cur->val;
        trav(cur->left, depth+1);
        trav(cur->right, depth+1);
    }
    int maxLevelSum(TreeNode* root) {
        trav(root, 0);
        int mx=-2e9,ind=-1;
        for(auto x:mp){
            if(x.second>mx){
                mx = x.second;
                ind = x.first;
            }
            else if(x.second==mx){
                if(x.first<ind){
                    ind = x.first;
                }
            }
        }
        return ind+1;
    }
};
