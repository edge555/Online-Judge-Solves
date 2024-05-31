class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        unordered_map<int,int>rowone,colone,rowzero,colzero;
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<m;j++){
                cnt+=grid[i][j];
            }
            rowone[i]=cnt;
            rowzero[i]=m-cnt;
        }
        for(int j=0;j<m;j++){
            int cnt=0;
            for(int i=0;i<n;i++){
                cnt+=grid[i][j];
            }
            colone[j]=cnt;
            colzero[j]=n-cnt;
        }
        vector<vector<int>>vec(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                vec[i][j]=rowone[i]+colone[j]-rowzero[i]-colzero[j];
            }
        }
        return vec;
    }
};
