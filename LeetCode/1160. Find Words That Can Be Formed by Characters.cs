public class Solution {
    public int CountCharacters(string[] words, string chars) {
        int[] freq = new int[30];
        Array.Clear(freq,0,freq.Length);
        foreach(char c in chars){
            freq[c-'a']++;
        }
        int ans=0;
        foreach(string s in words){
            int[] temp = new int[30];
            Array.Clear(temp,0,temp.Length);
            foreach(char c in s){
                temp[c-'a']++;
            }
            bool f=true;
            for(int i=0;i<26;i++){
                if(freq[i]<temp[i]){
                    f=false;
                    break;
                }
            }
            if(f==true){
                ans+=s.Length;
            }
        }
        return ans;
    }
}