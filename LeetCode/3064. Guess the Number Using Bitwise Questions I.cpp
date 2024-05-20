/**
 * Definition of commonSetBits API.
 * int commonSetBits(int num);
 */

class Solution {
public:
    int findNumber() {
        int num=0,x=1;
        for(int i=0;i<32;i++){
            int r=commonSetBits(x);
            if(r==1){
                num+=x;
            }
            x<<=1;
        }
        return num;
    }
};
