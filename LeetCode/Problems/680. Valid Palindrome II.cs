public class Solution {
    public bool isPali(string s,int i,int j){
        if(i>=j){
            return true;
        }
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    public bool ValidPalindrome(string s) {
        int i=0,j=s.Length-1;
        if(isPali(s,i,j)){
            return true;
        }
        while(i<j){
            if(s[i]!=s[j]){
                break;
            }
            else{
                i++;
                j--;
            }
        }
        if(isPali(s,i+1,j)){
            return true;
        }
        if(isPali(s,i,j-1)){
            return true;
        }
        return false;
    }
}