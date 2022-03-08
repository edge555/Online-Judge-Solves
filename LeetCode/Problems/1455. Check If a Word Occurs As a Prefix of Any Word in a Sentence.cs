public class Solution {
    public int IsPrefixOfWord(string sentence, string searchWord) {
        int i=0;
        string[] words = sentence.Split(' ');
        foreach(string word in words){
            i++;
            if(word.Length<searchWord.Length){
                continue;
            }
            if(word.Substring(0,searchWord.Length).Equals(searchWord)){
                return i;
            }   
        }
        return -1;
    }
}