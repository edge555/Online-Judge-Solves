class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int f=coordinates[0]-'a';
        int s=coordinates[1]-'0';
        if(f&1){
            if(s&1){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            if(s&1){
                return false;
            }
            else{
                return true;
            }
        }
    }
};
