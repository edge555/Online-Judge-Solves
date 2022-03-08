public class Solution {
    public static bool palindrome(string s){
        for(int i=0;i<s.Length/2;i++){
            if(s[i]!=s[s.Length-i-1]){
                return false;
            }
        }
        return true;
    }
    public string FirstPalindrome(string[] words) {
        string ans="";
        foreach(string s in words){
            if(palindrome(s)){
                return s;
            }
        }
        return ans;
    }
}