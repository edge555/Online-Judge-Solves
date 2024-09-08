class Solution {
public:
    bool checkPali(string &s,int i,int j){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int n=s.size(),st=0,mxlen=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(checkPali(s,i,j)){
                    if(j-i+1>mxlen){
                        mxlen=j-i+1;
                        st=i;
                    }
                }
            }
        }
        return s.substr(st,mxlen);
    }
};
