public class Solution {
    public bool BuddyStrings(string s, string goal) {
        if(s.Length==1 || s.Length!=goal.Length){
            return false;
        }
        int cnt=0;
        int[] ara=new int[30];
        Array.Clear(ara,0,ara.Length);
        List<int>lc = new List<int>();
        List<int>lc2 = new List<int>();
        for(int i=0;i<s.Length;i++){
            if(s[i]!=goal[i]){
                cnt++;
                lc.Add(s[i]-'a');
                lc2.Add(goal[i]-'a');
            }
            ara[s[i]-'a']++;
        }
        if(cnt>2){
            return false;
        }
        if(cnt==0){
            for(int i=0;i<26;i++){
                if(ara[i]>1){
                    return true;
                }
            }
        }
        if(cnt==2){
            lc.Sort();
            lc2.Sort();
            for(int i=0;i<2;i++){
                if(lc[i]!=lc2[i]){
                    return false;
                }
            }
            return true;
        }
        return false;
    }
}