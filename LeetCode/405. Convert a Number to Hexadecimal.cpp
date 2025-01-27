class Solution {
public:
    string toHex(int num) {
        if(num==0){
            return "0";
        }
        string ans="";
        vector<char>vec = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
        unsigned int n=num;
        while(n>0){
            ans=vec[n%16]+ans;
            n/=16;
        }
        return ans;
    }
};
