public class Solution {
    public string[] DivideString(string s, int k, char fill) {
        int r=s.Length/k;
        if(r*k!=s.Length){
            r++;
        }
        string[] ans = new string[r];
        string t="";
        int i=0;
        foreach(char c in s){
            t+=c;
            if(t.Length==k){
                ans[i++]=t;
                t="";
            }
        }
        if(t.Length!=0){
            while(t.Length<k){
                t+=fill;
            }
            ans[i]=t;
        }
        return ans;
    }
}