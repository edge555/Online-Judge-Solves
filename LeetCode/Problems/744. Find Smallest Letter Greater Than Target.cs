public class Solution {
    public char NextGreatestLetter(char[] letters, char target) {
        foreach(char c in letters){
            if(c>target){
                return c;
            }
        }
        foreach(char c in letters){
            if((c-'a'+26>target-'a')){
                return c;
            }
        }
        return '.';
    }
}