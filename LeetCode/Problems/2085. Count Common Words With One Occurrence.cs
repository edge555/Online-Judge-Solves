public class Solution {
    public int CountWords(string[] words1, string[] words2) {
        Dictionary<string,int>mp = new Dictionary<string,int>();
        Dictionary<string,int>mp2 = new Dictionary<string,int>();
        foreach(string s in words1){
            if(mp.ContainsKey(s)){
                mp[s]++;
            }
            else{
                mp[s]=1;
            }
        }
        foreach(string s in words2){
            if(mp2.ContainsKey(s)){
                mp2[s]++;
            }
            else{
                mp2[s]=1;
            }
        }
        int ans=0;
        foreach(KeyValuePair<string,int>kv in mp){
            if(kv.Value==1){
                if(mp2.ContainsKey(kv.Key)){
                    if(mp2[kv.Key]==1){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
}