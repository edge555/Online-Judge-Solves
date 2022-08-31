public class Solution {
    static public int isVowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            return 1;
        }
        return 0;
    }
    public int MaxVowels(string s, int k) {
        int st=0,en=k-1;
        int ans=0,cnt=0;
        for(int i=st;i<=en;i++){
            cnt+=isVowel(s[i]);
        }
        ans=cnt;
        while(true){
            en++;
            if(en>=s.Length){
                break;
            }
            cnt+=isVowel(s[en]);
            cnt-=isVowel(s[st++]);
            ans=Math.Max(ans,cnt);
        }
        return ans;
    }
}