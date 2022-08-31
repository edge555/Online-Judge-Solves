public class Solution {
    public int FindContentChildren(int[] g, int[] s) {
        Array.Sort(g);
        Array.Sort(s);
        int i,j=0,cnt=0;
        for(i=0;i<g.Length;i++){
            while(j<s.Length && s[j]<g[i]){
                j++;
            }
            if(j==s.Length){
                break;
            }
            cnt++;
            j++;
        }
        return cnt;
    }
}