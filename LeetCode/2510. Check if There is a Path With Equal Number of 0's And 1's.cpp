class Solution {
public:
    bool dp[101][101][201];
    bool func(int i,int j,int zero,int one,vector<vector<int>>& grid){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size()){
            return false;
        }
        if(i==grid.size()-1 && j==grid[0].size()-1 && zero==one){
            return true;
        }
        if(grid[i][j]==0){
            zero++;
        }
        else{
            one++;
        }
        if(dp[i][j][one]){
            return false;
        }
        if(func(i+1,j,zero,one,grid) || func(i,j+1,zero,one,grid)){
            return true;
        }
        dp[i][j][one]=true;
        return false;
    }
    bool isThereAPath(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        if((n+m)%2==0){
            return false;
        }
        if(grid[0][0]==0){
            return func(0,0,1,0,grid);
        }
        else{
            return func(0,0,0,1,grid);
        }
    }
};
