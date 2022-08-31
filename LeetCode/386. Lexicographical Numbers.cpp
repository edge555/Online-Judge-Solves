class Solution {
public:
    vector<int>vec;
    void dfs(int x,int n){
        if(x>n){
            return;
        }
        vec.push_back(x);
        for(int i=0;i<=9;i++){
            int r=x*10+i;
            dfs(r,n);
        }
    }
    vector<int> lexicalOrder(int n) {
        for(int i=1;i<=9;i++){
            dfs(i,n);
        }
        return vec;
    }
};
