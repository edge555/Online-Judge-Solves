class FindElements {
public:
    unordered_map<int,bool>mp;
    void trav(TreeNode* cur,int val){
        cur->val=val;
        mp[val]=true;
        if(cur->left==NULL && cur->right==NULL){
            return;
        }
        if(cur->left){
            trav(cur->left,2*val+1);
        }
        if(cur->right){
            trav(cur->right,2*val+2);
        }
    }
    FindElements(TreeNode* root) {
        trav(root,0);
    }

    bool find(int target) {
        return mp.find(target)!=mp.end();
    }
};
