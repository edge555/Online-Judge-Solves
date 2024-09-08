class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1,j=b.length()-1,carry=0;
        string s;
        while(i>=0 || j>=0 || carry) {
            if(i>=0){
                carry+=a[i]-'0';
                i--;
            }
            if(j>=0) {
                carry+=b[j]-'0';
                j--;
            }
            s+=(carry%2+'0');
            carry>>=1;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
