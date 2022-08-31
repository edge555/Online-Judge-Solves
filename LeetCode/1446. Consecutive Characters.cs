public class Solution {
    public int MaxPower(string s) {
        int ans=1,cnt=1;
        int i=1,n=s.Length;
        char ch=s[0];
        while(i<n){
            if(s[i]==ch){
                cnt++;
                i++;
            }
            else{
                ans=Math.Max(ans,cnt);
                cnt=1;
                ch=s[i];
                i++;
            }
        }
        if(cnt>0){
            ans=Math.Max(cnt,ans);
        }
        return ans;
    }
}