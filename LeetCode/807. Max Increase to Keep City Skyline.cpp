class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int>rows,cols;
        for(int i=0;i<grid.size();i++){
            int mx=0;
            for(int j=0;j<grid.size();j++){
                mx=max(mx,grid[i][j]);
            }
            rows.push_back(mx);
        }
        for(int i=0;i<grid.size();i++){
            int mx=0;
            for(int j=0;j<grid.size();j++){
                mx=max(mx,grid[j][i]);
            }
            cols.push_back(mx);
        }
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                ans+=(min(rows[i],cols[j])-grid[i][j]);
            }
        }
        return ans;
    }
};
