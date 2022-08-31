class Solution {
public:
    bool check(vector<int>&vec,int cnt){
        if(vec.empty()){
            return false;
        }
        if(vec.size()==1){
            return true;
        }
        if(cnt&1){
            for(int i=1;i<vec.size();i++){
                if(vec[i-1]<=vec[i]){
                    return false;
                }
            }
        }
        else{
            for(int i=1;i<vec.size();i++){
                if(vec[i-1]>=vec[i]){
                    return false;
                }
            }
        }
        return true;
    }
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        bool f=true;
        int cnt=0;
        while(!q.empty()){
            int sz=q.size();
            vector<int>vec;
            while(sz--){
                TreeNode* cur=q.front();
                q.pop();
                if(cnt&1){
                    if(cur->val%2==0){
                        vec.push_back(cur->val);
                    }
                    else{
                        return false;
                    }
                }
                else{
                    if(cur->val&1){
                        vec.push_back(cur->val);
                    }
                    else{
                        return false;
                    }
                }
                if(cur->left){
                    q.push(cur->left);
                }
                if(cur->right){
                    q.push(cur->right);
                }
            }
            f=check(vec,cnt);
            if(!f){
                break;
            }
            cnt++;
        }
        return f;
    }
};
