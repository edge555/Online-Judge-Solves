class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<pair<int,int>,vector<int>>mp;
        map<int,set<int>>rowmap;
        int left=0,right=0;
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});
        while(!q.empty()){
            pair<TreeNode*,pair<int,int>>p=q.front();
            q.pop();
            TreeNode* cur=p.first;
            pair<int,int>coor=p.second;
            int x=coor.first,y=coor.second;
            left=min(left,y);
            right=max(right,x);
            rowmap[y].insert(x);
            mp[{x,y}].push_back(cur->val);
            if(cur->left!=NULL){
                q.push({cur->left,{x+1,y-1}});
            }
            if(cur->right!=NULL){
                q.push({cur->right,{x+1,y+1}});
            }
        }
        vector<vector<int>>ans;
        for(int i=left;i<=right;i++){
            vector<int>vec;
            set<int>s=rowmap[i];
            for(auto x:s){
                vector<int>temp=mp[{x,i}];
                sort(temp.begin(),temp.end());
                for(auto p:temp){
                    vec.push_back(p);
                }
            }
            if(vec.empty()){
                continue;
            }
            ans.push_back(vec);
        }
        return ans;
    }
};
