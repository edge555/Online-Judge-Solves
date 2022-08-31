class Solution {
public:
    int dx[8]={1,1,0,-1,-1,-1,0,1};
    int dy[8]={0,1,1,1,0,-1,-1,-1};
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>>ans;
        int n=grid.size(),m=grid[0].size();
        for(int i=1;i<n-1;i++){
            vector<int>vec;
            for(int j=1;j<m-1;j++){
                int mx=grid[i][j];
                for(int k=0;k<8;k++){
                    int x=i+dx[k];
                    int y=j+dy[k];
                    mx=max(mx,grid[x][y]);
                }
                vec.push_back(mx);
            }
            ans.push_back(vec);
        }
        return ans;
    }
};
