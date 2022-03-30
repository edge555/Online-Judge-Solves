public class Solution {
    public string MergeAlternately(string word1, string word2) {
        string ans="";
        int i=0,j=0;
        for(;i<word1.Length && j<word2.Length;i++,j++){
            ans+=word1[i];
            ans+=word2[j];
        }
        while(i<word1.Length){
            ans+=word1[i++];
        }
        while(j<word2.Length){
            ans+=word2[j++];
        }
        return ans;
    }
}