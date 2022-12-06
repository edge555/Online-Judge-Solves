class Solution {
public:
    int smallestCommonElement(vector<vector<int>>& mat) {
        int n=mat.size();
        for(auto x:mat[0]){
            bool f=true;
            for(int i=1;i<n;i++){
                int ind=lower_bound(mat[i].begin(),mat[i].end(),x)-mat[i].begin();
                if(mat[i][ind]!=x){
                    f=false;
                    break;
                }
            }
            if(f){
                return x;
            }
        }
        return -1;
    }
};
