class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n=matrix.size(),neg=0,mn=INT_MAX;
        long long sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mn=min(mn,abs(matrix[i][j]));
                sum+=abs(matrix[i][j]);
                if(matrix[i][j]<0){
                    neg++;
                }
            }
        }
        if(neg&1){
            sum-=2*mn;
        }
        return sum;
    }
};
