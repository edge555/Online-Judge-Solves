class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i;
        for(i=0;i<matrix.size();i++){
            if(matrix[i][0]>target){
                break;
            }
        }
        i--;
        i=max(i,0);
        int ind=lower_bound(matrix[i].begin(),matrix[i].end(),target)-matrix[i].begin();
        if(ind==matrix[i].size()){
            ind--;
        }
        return matrix[i][ind]==target;
    }
};
