class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int ara[m+1][n+1];
        memset(ara,0,sizeof(ara));
        for(auto v:indices){
            int x=v[0],y=v[1];
            for(int i=0;i<n;i++){
                ara[x][i]++;
            }
            for(int i=0;i<m;i++){
                ara[i][y]++;
            }
        }
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cnt+=ara[i][j]%2;
            }
        }
        return cnt;
    }
};
