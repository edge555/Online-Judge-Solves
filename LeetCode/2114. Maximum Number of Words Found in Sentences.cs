public class Solution {
    public int MostWordsFound(string[] sentences) {
        int mx=-1;
        for(int i=0;i<sentences.Length;i++){
            int cnt=1;
            for(int j=0;j<sentences[i].Length;j++){
                if(sentences[i][j]==' '){
                    cnt++;
                }
            }
            mx=Math.Max(mx,cnt);
        }
        return mx;
    }
}