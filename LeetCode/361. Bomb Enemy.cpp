class Solution {
public:
    int rowLeft[501][501],rowRight[501][501],colUp[501][501],colDown[501][501];
    int maxKilledEnemies(vector<vector<char>>& grid) {
        int n=grid.size(),m=grid[0].size();

        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<m;j++){
                if(grid[i][j]=='0'){
                    rowLeft[i][j]=cnt;
                }
                else if(grid[i][j]=='W'){
                    cnt=0;
                }
                else{
                    cnt++;
                }
            }
        }

        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=m-1;j>=0;j--){
                if(grid[i][j]=='0'){
                    rowRight[i][j]=cnt;
                }
                else if(grid[i][j]=='W'){
                    cnt=0;
                }
                else{
                    cnt++;
                }
            }
        }

        for(int j=0;j<m;j++){
            int cnt=0;
            for(int i=0;i<n;i++){
                if(grid[i][j]=='0'){
                    colUp[i][j]=cnt;
                }
                else if(grid[i][j]=='W'){
                    cnt=0;
                }
                else{
                    cnt++;
                }
            }
        }

        for(int j=0;j<m;j++){
            int cnt=0;
            for(int i=n-1;i>=0;i--){
                if(grid[i][j]=='0'){
                    colDown[i][j]=cnt;
                }
                else if(grid[i][j]=='W'){
                    cnt=0;
                }
                else{
                    cnt++;
                }
            }
        }

        int mx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mx=max(mx,rowLeft[i][j]+rowRight[i][j]+colUp[i][j]+colDown[i][j]);
            }
        }
        return mx;
    }
};
