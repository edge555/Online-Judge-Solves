class Solution {
public:
    int countDigits(int num) {
        int n=num,x,cnt=0;
        while(n>0){
            x = n%10;
            n/=10;
            if(x && num%x==0){
                cnt++;
            }
        }
        return cnt;
    }
};
