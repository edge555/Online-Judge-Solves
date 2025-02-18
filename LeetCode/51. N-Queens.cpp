class Solution {
public:
    void process(vector<vector<int>> &board,vector<vector<string>>&vec,int n){
        vector<string>temp;
        for(int i=0;i<n;i++){
            string s="";
            for(int j=0;j<n;j++){
                if(board[i][j]==1){
                    s+="Q";
                }
                else{
                    s+=".";
                }
            }
            temp.push_back(s);
        }
        vec.push_back(temp);
    }

    bool check(int row,int col,vector<vector<int>> &board,int n){
        int x=row;
        int y=col;
        while(y>0){
            y--;
            if(board[x][y]==1){
                return false;
            }
        }

        y=col;
        while(x>0 && y>0){
            x--;
            y--;
            if(board[x][y]==1){
                return false;
            }
        }

        x=row;
        y=col;
        while(x<n-1 && y>0){
            x++;
            y--;
            if(board[x][y]==1){
                return false;
            }
        }

        return true;
    }

    void solve(int row,int col,vector<vector<int>> &board,vector<vector<string>>&ans,int n){
        if(col==n){
            process(board,ans,n);
            return;
        }
        for(int i=0;i<n;i++){
            if(check(i,col,board,n))
            {
                board[i][col]=1;
                solve(i,col+1,board,ans,n);
                board[i][col]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>vec;
        vector<vector<int>> board(n,vector<int>(n,0));
        solve(0,0,board,vec,n);
        return vec;
    }
};
