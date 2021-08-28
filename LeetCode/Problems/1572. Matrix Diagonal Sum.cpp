class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int i,j,sum=0,n=mat.size();
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                    sum+=mat[i][j];
                else if(i+j==n-1)
                    sum+=mat[i][j];
            }
        }
        return sum;
    }
};
