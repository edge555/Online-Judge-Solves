class Solution {
public:
    bool isStrobogrammatic(string num) {
        int n=num.size();
        for(int i=0,j=n-1;i<j;i++,j--){
            if((num[i]=='6' && num[j]=='9') || (num[i]=='9' && num[j]=='6') || (num[i]=='8' && num[j]=='8') || (num[i]=='1' && num[j]=='1') || (num[i]=='0' && num[j]=='0')){
                continue;
            }
            return false;
        }
        if(n&1){
            if(!(num[n/2]=='0' || num[n/2]=='1' || num[n/2]=='8')){
                return false;
            }
        }
        return true;
    }
};
