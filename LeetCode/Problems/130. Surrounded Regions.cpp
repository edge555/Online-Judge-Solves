class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    bool vis[201][201];
    bool f=true;
    bool valid(int x,int y,int n,int m){
        return x>=0 && x<n && y>=0 && y<m;
    }
    vector<pair<int,int>>vec;
    void dfs(int x,int y,int &n,int &m,vector<vector<char>>&board){
        vec.push_back({x,y});
        for(int i=0;i<4;i++){
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(valid(xx,yy,n,m)){
                if(board[xx][yy]=='O' && !vis[xx][yy]){
                    vis[xx][yy]=true;
                    dfs(xx,yy,n,m,board);
                }
            }
            else{
                f=false;
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int n=board.size(),m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O' && !vis[i][j]){
                    vis[i][j]=true;
                    f=true;
                    vec.clear();
                    dfs(i,j,n,m,board);
                    if(f){
                        for(auto v:vec){
                            board[v.first][v.second]='X';
                        }
                    }
                }
            }
        }
    }
};
