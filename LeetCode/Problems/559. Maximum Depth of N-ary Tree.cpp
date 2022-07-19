class Solution {
public:
    int maxDepth(Node* root) {
        if(root==NULL){
            return 0;
        }
        int cnt=0;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
            cnt++;
            while(sz--){
                Node* temp=q.front();
                q.pop();
                for(auto x:temp->children){
                    if(x==NULL){
                        continue;
                    }
                    q.push(x);
                }
            }
        }
        return cnt;
    }
};
