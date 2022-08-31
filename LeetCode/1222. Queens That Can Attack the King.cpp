class Solution {
public:
    int grid[65][65];
    int dx[8]={1,1,0,-1,-1,-1,0,1};
    int dy[8]={0,1,1,1,0,-1,-1,-1};
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        memset(grid,0,sizeof(grid));
        for(auto v:queens){
            grid[v[0]][v[1]]=1;
        }
        for(int i=0;i<8;i++){
            int xx=king[0],yy=king[1];
            while(1){
                xx+=dx[i];
                yy+=dy[i];
                if(xx<0 || xx>7 || yy<0 || yy>7){
                    break;
                }
                if(grid[xx][yy]==-1){
                    break;
                }
                if(grid[xx][yy]==1){
                    grid[xx][yy]=-1;
                    break;
                }
            }
        }
        vector<vector<int>>ans;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(grid[i][j]==-1){
                    vector<int>temp={{i,j}};
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};
