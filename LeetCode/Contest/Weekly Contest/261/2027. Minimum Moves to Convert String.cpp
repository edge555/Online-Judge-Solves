class Solution {
public:
    int minimumMoves(string s) {
        int cnt=0,n=s.size();
        for(int i=0;i<=n-3;i++){
            if(s[i]=='X'){
                cnt++;
                s[i]='O';
                s[i+1]=s[i];
                s[i+2]=s[i];
            }
        }
        if(s[n-1]=='X' || s[n-2]=='X')
            cnt++;
        return cnt;
    }
};
