class Solution {
public:
    string getSmallestString(int n, int k) {
        string s="";
        if(n*26==k){
            while(n--){
                s+='z';
            }
            return s;
        }
        int i;
        for(i=0;i<n;i++){
            int r=k-1;
            if((n-i-1)*26>=k){
                s+='a';
                k--;
            }
            else{
                int rem=k%26;
                s+=char(rem-1+'a');
                k-=rem;
                i++;
                break;
            }
        }
        while(i<n){
            s+='z';
            i++;
        }
        return s;
    }
};
