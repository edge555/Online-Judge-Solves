class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        int lo=0,hi=n-1;
        for(int i=0;i<n;i++){
            if(matrix[i][0]>target){
                break;
            }
            int ind=lower_bound(matrix[i].begin(),matrix[i].end(),target)-matrix[i].begin();
            if(ind==m){
                ind--;
            }
            if(matrix[i][ind]==target){
                return true;
            }
        }
        return false;
    }
};
