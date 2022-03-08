public class Solution {
    public int CanBeTypedWords(string text, string brokenLetters) {
        string[] words = text.Split(' ');
        int[] ara = new int[30];
        Array.Clear(ara,0,ara.Length);
        foreach(char c in brokenLetters){
            ara[c-'a']=1;
        }
        int ans=0;
        foreach(string s in words){
            bool f=true;
            foreach(char c in s){
                if(ara[c-'a']==1){
                    f=false;
                    break;
                }
            }
            if(f){
                ans++;
            }
        }
        return ans;
    }
}