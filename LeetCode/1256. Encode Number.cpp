class Solution {
public:
    string encode(int n){
        string s;
        while(n>=1){
            s+=(n%2?'0':'1');
            n=(n-1)/2;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
