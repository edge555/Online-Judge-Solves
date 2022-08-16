class Solution {
public:
    int dx[8]={1,1,0,-1,-1,-1,0,1};
    int dy[8]={0,1,1,1,0,-1,-1,-1};
    bool valid(int x,int y,int n,int m){
        return x>=0 && x<n && y>=0 && y<m;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size(),m=board[0].size();
        vector<vector<int>>vec(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int live=0,dead=0;
                for(int k=0;k<8;k++){
                    int x=i+dx[k];
                    int y=j+dy[k];
                    if(valid(x,y,n,m)){
                        live+=board[x][y];
                        dead+=1-board[x][y];
                    }
                }
                if(board[i][j]==1){
                    if(live==2 || live==3){
                        vec[i][j]=1;
                    }
                }
                else{
                    if(live==3){
                        vec[i][j]=1;
                    }
                }
            }
        }
        board=vec;
    }
};
