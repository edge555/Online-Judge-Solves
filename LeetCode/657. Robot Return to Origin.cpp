class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        for(auto c:moves){
            if(c=='U'){
                x--;
            }
            else if(c=='D'){
                x++;
            }
            else if(c=='R'){
                y++;
            }
            else{
                y--;
            }
        }
        return x==0 && y==0;
    }
};
