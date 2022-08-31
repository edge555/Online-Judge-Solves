public class Solution {
    public bool CheckAlmostEquivalent(string word1, string word2) {
        int[] freq = new int[30];
        int[] freq2 = new int[30];
        Array.Clear(freq,0,freq.Length);
        Array.Clear(freq2,0,freq2.Length);
        for(int i=0;i<word1.Length;i++){
            freq[word1[i]-'a']++;
            freq2[word2[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(Math.Abs(freq[i]-freq2[i])>3){
                return false;
            }
        }
        return true;
    }
}