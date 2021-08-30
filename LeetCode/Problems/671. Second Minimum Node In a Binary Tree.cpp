class Solution {
public:
    set<int>st;
    void trav(TreeNode* cur){
        if(cur==NULL){
            return;
        }
        st.insert(cur->val);
        trav(cur->left);
        trav(cur->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        trav(root);
        if(st.size()<=1)
            return -1;
        auto it=st.begin();
        it++;
        return *it;
    }
};
