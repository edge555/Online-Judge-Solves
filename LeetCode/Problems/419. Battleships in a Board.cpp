class Solution {
public:
    bool vis[201][201];
    vector<int>dx={0,0,1,-1};
    vector<int>dy={1,-1,0,0};
    bool valid(int x,int y,int n,int m){
        return x>=0 && x<n && y>=0 && y<m;
    }
    void dfs(int x,int y,vector<vector<char>>&board){
        vis[x][y]=true;
        for(int i=0;i<4;i++){
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(valid(xx,yy,board.size(),board[0].size())){
                if(board[xx][yy]=='X' && !vis[xx][yy]){
                    dfs(xx,yy,board);
                }
            }
        }
    }
    int countBattleships(vector<vector<char>>& board) {
        memset(vis,false,sizeof(vis));
        int cnt=0;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='X' && !vis[i][j]){
                    cnt++;
                    dfs(i,j,board);
                }
            }
        }
        return cnt;
    }
};
