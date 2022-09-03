bool checkPalindromeB(int N, int B)
{
    long long rev=0;
    long long m=N;
    while(m){
        rev=rev*B+m%B;
        m/=B;
    }
    return N==rev;
}
class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        bool ans=1;
        for(int i=2;i<=n-2;i++){
            ans&=checkPalindromeB(n,i);
        }
        return ans;
    }
};
