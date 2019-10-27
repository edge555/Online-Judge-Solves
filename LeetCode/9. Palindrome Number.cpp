class Solution {
public:
    bool isPalindrome(long long int x) {
        if(x<0)
            return false;
        long long int n=x,m=0;
        while(x)
        {
            m*=10;
            m+=x%10;
            x/=10;
        }
        return n==m;
    }
};
