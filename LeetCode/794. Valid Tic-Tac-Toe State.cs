public class Solution {
    public bool ValidTicTacToe(string[] board) {
        int[,] ara = new int[3,3];
        int x=0,o=0;
        for(int i=0;i<board.Length;i++){
            string s=board[i];
            for(int j=0;j<s.Length;j++){
                if(s[j]==' '){
                    ara[i,j]=0;
                }
                else if(s[j]=='O'){
                    ara[i,j]=1;
                    o++;
                }
                else{
                    ara[i,j]=2;
                    x++;
                }
            }
        }
        if(o>x || x-o>1){
            return false;
        }
        List<int>l = new List<int>();
        for(int i=0;i<3;i++){
            if(ara[i,1]== ara[i,2] && ara[i,0]==ara[i,1] && ara[i,0]!=0){
                l.Add(ara[i,0]);
            }
        }
        for(int i=0;i<3;i++){
            if(ara[1,i]== ara[2,i] && ara[0,i]==ara[1,i] && ara[0,i]!=0){
                l.Add(ara[0,i]);
            }
        }
        if(ara[0,0]== ara[1,1] && ara[2,2]==ara[1,1] && ara[1,1]!=0){
            l.Add(ara[1,1]);
        }
        if(ara[0,2]== ara[1,1] && ara[2,0]==ara[1,1] && ara[1,1]!=0){
            l.Add(ara[1,1]);
        }
        int winx=0,wino=0;
        foreach(int n in l){
            if(n==2){
                winx++;
            }
            else{
                wino++;
            }
        }
        if(winx>0 && wino>0){
            return false;
        }
        if(winx>0 && x-o!=1){
            return false;
        }
        if(wino>0 && x!=o){
            return false;
        }
        return true;
    }
}