class Solution {
public:
    bool validUtf8(vector<int>& data){
        int cnt=0;
        for(int i=0;i<data.size();i++){
            int x=data[i];
            if(!cnt){
                if((x>>5)==0b110){
                    cnt=1;
                }
                else if((x>>4)==0b1110){
                    cnt=2;
                }
                else if((x>>3)==0b11110){
                    cnt=3;
                }
                else if((x>>7)!=0){
                    return false;
                }
            }
            else {
                if((x>>6)!=0b10){
                    return false;
                }
                cnt--;
            }
        }
        return cnt==0;
    }
};
