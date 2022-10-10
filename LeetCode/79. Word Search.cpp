class Solution {
public:
    bool f;
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    bool valid(int x,int y,int n,int m){
        return x>=0 && x<n && y>=0 && y<m;
    }
    void dfs(int x,int y,vector<vector<char>>& board,int n,int m,string word,int ind ,vector<vector<bool>>& vis){
        if(ind>=word.size()){
            f=true;
            return;
        }
        vis[x][y]=true;
        for(int i=0;i<4;i++){
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(valid(xx,yy,n,m)){
                if(board[xx][yy]==word[ind] && !vis[xx][yy]){
                    vis[xx][yy]=true;
                    dfs(xx,yy,board,n,m,word,ind+1,vis);
                    vis[xx][yy]=false;
                }
            }
        }
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size(),m=board[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    f=false;
                    vis[i][j]=true;
                    dfs(i,j,board,n,m,word,1,vis);
                    if(f){
                        return true;
                    }
                    vis[i][j]=false;
                }
            }
        }
        return false;
    }
};
