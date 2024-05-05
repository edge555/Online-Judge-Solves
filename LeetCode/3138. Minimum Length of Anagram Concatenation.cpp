class Solution {
public:
    int freq[27][100005];
    void pre(string &s){
        for(int i=0;i<s.size();i++){
            for(int j=0;j<26;j++){
                if(j==s[i]-'a'){
                    freq[j][i+1]=freq[j][i]+1;
                }
                else{
                    freq[j][i+1]=freq[j][i];
                }
            }
        }
    }
    bool check(int k,int n){
        for(int i=k;i<n;i+=k){
            for(int j=0;j<26;j++){
                if(freq[j][i+k]-freq[j][i]!=freq[j][k]-freq[j][0]){
                    return false;
                }
            }
        }
        return true;
    }
    int minAnagramLength(string s) {
        pre(s);
        int ans=s.size(),n=s.size();
        for(int i=1;i<=n/2;i++){
            if(n%i==0){
                if(check(i,n)){
                    return i;
                }
            }
        }
        return ans;
    }
};
