class Solution {
public:
    vector<vector<int>>ans;
    vector<vector<int>> levelOrder(Node* root) {
        if(root==NULL){
            return ans;
        }
        vector<int>temp;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            temp.clear();
            int sz=q.size();
            while(sz--){
                Node* cur=q.front();
                q.pop();
                temp.push_back(cur->val);
                for(auto n:cur->children){
                    if(n==NULL){
                        continue;
                    }
                    q.push(n);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
