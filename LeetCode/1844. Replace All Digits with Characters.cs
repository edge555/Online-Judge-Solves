public class Solution {
    public string ReplaceDigits(string s) {
        string ans="";
        for(int i=0;i<s.Length;i++){
            if(i%2==0){
                ans+=s[i];
            }
            else{
                ans+=(char)(s[i-1]+(s[i]-'0'));
            }
        }
        return ans;
    }
}