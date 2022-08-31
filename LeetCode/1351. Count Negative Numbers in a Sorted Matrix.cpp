class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
       int i,j,n=grid.size(),m=grid[0].size(),cnt=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j]<0)
                {
                    cnt+=m-j;
                    break;
                }
            }
        }
        return cnt;
    }
};
