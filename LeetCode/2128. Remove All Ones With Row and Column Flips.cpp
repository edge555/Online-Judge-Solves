class Solution {
public:
    bool removeOnes(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        for(int i=0;i<m;i++){
            if(grid[0][i]==1){
                for(int j=0;j<n;j++){
                    grid[j][i]^=1;
                }
            }
        }
        for(int i=1;i<n;i++){
            int sum=0;
            for(int j=0;j<m;j++){
                sum+=grid[i][j];
            }
            if(sum==0 || sum==m){
                continue;
            }
            return false;
        }
        return true;
    }
};
