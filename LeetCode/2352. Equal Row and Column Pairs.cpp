class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        map<int,vector<int>>row;
        for(int i=0;i<n;i++){
            vector<int>vec;
            for(int j=0;j<n;j++){
                vec.push_back(grid[i][j]);
            }
            row[i]=vec;
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            vector<int>vec;
            for(int j=0;j<n;j++){
                vec.push_back(grid[j][i]);
            }
            for(int j=0;j<n;j++){
                cnt+=vec==row[j];
            }
        }
        return cnt;
    }
};
