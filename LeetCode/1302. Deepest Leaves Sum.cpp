class Solution {
public:
    vector<pair<int,int> >vec;
    void trav(TreeNode* cur,int depth){
        vec.push_back({depth,cur->val});
        if(cur->left){
            trav(cur->left,depth+1);
        }
        if(cur->right){
            trav(cur->right,depth+1);
        }
        return;
    }
    int deepestLeavesSum(TreeNode* root) {
        int sum=0;
        trav(root,0);
        sort(vec.begin(),vec.end());
        int last = vec[vec.size()-1].first;
        for(int i=vec.size()-1;i>=0;i--){
            if(vec[i].first==last){
                sum+=vec[i].second;
            }
            else{
                break;
            }
        }
        return sum;
    }
};
