public class Solution {
    public int MinFlips(string target) {
        int cnt=0,state=0;
        foreach(char c in target){
            if(c-'0'!=state){
                cnt++;
                state=c-'0';
            }
        }
        return cnt;
    }
}