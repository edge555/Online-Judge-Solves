class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string s=to_string(n);
        int sz=s.size(),flag=sz;
        for(int i=sz-1;i>0;i--){
            if(s[i]<s[i-1]){
                s[i-1]--;
                flag=i;
            }
        }
        for(int i=flag;i<sz;i++){
            s[i]='9';
        }
        return stoi(s);
    }
};
