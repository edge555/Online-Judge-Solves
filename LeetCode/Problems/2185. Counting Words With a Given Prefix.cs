public class Solution {
    public int PrefixCount(string[] words, string pref) {
        int ans=0;
        foreach(string s in words){
            if(s.Length<pref.Length){
                continue;
            }
            string temp=s.Substring(0,pref.Length);
            if(temp.Equals(pref)){
                ans++;
            }
        }
        return ans;
    }
}