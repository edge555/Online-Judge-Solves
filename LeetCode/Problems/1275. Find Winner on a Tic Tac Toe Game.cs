public class Solution {
    public int checkWinner(int[,] ara){
        if(ara[0,0]==1 && ara[0,1]==1 && ara[0,2]==1){
            return 1;
        }
        else if(ara[1,0]==1 && ara[1,1]==1 && ara[1,2]==1){
            return 1;
        }
        else if(ara[2,0]==1 && ara[2,1]==1 && ara[2,2]==1){
            return 1;
        }
        else if(ara[0,0]==1 && ara[1,0]==1 && ara[2,0]==1){
            return 1;
        }
        else if(ara[0,1]==1 && ara[1,1]==1 && ara[2,1]==1){
            return 1;
        }
        else if(ara[0,2]==1 && ara[1,2]==1 && ara[2,2]==1){
            return 1;
        }
        else if(ara[0,0]==1 && ara[1,1]==1 && ara[2,2]==1){
            return 1;
        }
        else if(ara[0,2]==1 && ara[1,1]==1 && ara[2,0]==1){
            return 1;
        }
        else if(ara[0,0]==-1 && ara[0,1]==-1 && ara[0,2]==-1){
            return -1;
        }
        else if(ara[1,0]==-1 && ara[1,1]==-1 && ara[1,2]==-1){
            return -1;
        }
        else if(ara[2,0]==-1 && ara[2,1]==-1 && ara[2,2]==-1){
            return -1;
        }
        else if(ara[0,0]==-1 && ara[1,0]==-1 && ara[2,0]==-1){
            return -1;
        }
        else if(ara[0,1]==-1 && ara[1,1]==-1 && ara[2,1]==-1){
            return -1;
        }
        else if(ara[0,2]==-1 && ara[1,2]==-1 && ara[2,2]==-1){
            return -1;
        }
        else if(ara[0,0]==-1 && ara[1,1]==-1 && ara[2,2]==-1){
            return -1;
        }
        else if(ara[0,2]==-1 && ara[1,1]==-1 && ara[2,0]==-1){
            return -1;
        }
        return 0;
    }
    public string Tictactoe(int[][] moves) {
        int[,] ara= new int[3,3];
        Array.Clear(ara,0,ara.Length);
        int winner = 0;
        for(int i=0;i<moves.Length;i++){
            int x=moves[i][0],y=moves[i][1];
            if(i%2==0){
                ara[x,y]=1;
            }
            else{
                ara[x,y]=-1;
            }
            winner = checkWinner(ara);
            if(winner!=0){
                break;
            }
        }
        if(winner == 1){
            return "A";
        }
        else if(winner == -1){
            return "B";
        }
        else{
            if(moves.Length==9){
                 return "Draw";
            }
            else{
                return "Pending";
            }
        }
    }
}