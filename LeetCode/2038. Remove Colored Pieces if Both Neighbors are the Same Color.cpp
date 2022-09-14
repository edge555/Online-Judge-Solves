class Solution {
public:
    bool winnerOfGame(string colors) {
        int a=0,b=0,cnt=-1;
        for(auto c:colors){
            if(c=='A'){
                if(cnt==-1){
                    cnt=1;
                }
                else{
                    cnt++;
                }
            }
            else{
                a+=max(0,cnt-2);
                cnt=-1;
            }
        }
        a+=max(0,cnt-2);
        cnt=-1;
        for(auto c:colors){
            if(c=='B'){
                if(cnt==-1){
                    cnt=1;
                }
                else{
                    cnt++;
                }
            }
            else{
                b+=max(0,cnt-2);
                cnt=-1;
            }
        }
        b+=max(0,cnt-2);
        if(a==0){
            return false;
        }
        return a>b;
    }
};
