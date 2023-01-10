class TicTacToe {
public:
    int p,ara[101][101];
    TicTacToe(int n) {
        p=n;
        memset(ara,0,sizeof(ara));
    }
    int move(int row, int col, int player) {
        ara[row][col]=player;
        for(int i=0;i<p;i++){
            bool f=true;
            for(int j=1;j<p;j++){
                if(ara[i][j]!=ara[i][0]){
                    f=!f;
                    break;
                }
            }
            if(f){
                return ara[i][0];
            }
        }
        for(int i=0;i<p;i++){
            bool f=true;
            for(int j=1;j<p;j++){
                if(ara[j][i]!=ara[0][i]){
                    f=!f;
                    break;
                }
            }
            if(f){
                return ara[0][i];
            }
        }
        int x=1,y=1;
        bool f=true;
        for(int i=0;i<p-1;i++,x++,y++){
            if(ara[x][y]!=ara[0][0]){
                f=!f;
                break;
            }
        }
        if(f){
            return ara[0][0];
        }
        f=true;
        x=1,y=p-2;
        for(int i=0;i<p-1;i++,x++,y--){
            if(ara[x][y]!=ara[0][p-1]){
                f=!f;
                break;
            }
        }
        if(f){
            return ara[0][p-1];
        }
        return 0;
    }
};
