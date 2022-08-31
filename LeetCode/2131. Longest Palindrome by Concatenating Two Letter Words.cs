public class Solution {
    public int LongestPalindrome(string[] words) {
        Dictionary<string,int>dict = new Dictionary<string,int>();
        foreach(string s in words){
            if(dict.ContainsKey(s)){
                dict[s]++;
            }
            else{
                dict.Add(s,1);
            }
        }
        int cnt=0,mx=0;
        string temp="-";
        foreach(KeyValuePair<string,int>kv in dict){
            string s = kv.Key;
            if(s[0]!=s[1]){
                string t=s[1]+""+s[0];
                if(!dict.ContainsKey(t)){
                    continue;
                }
                int x=kv.Value;
                int y=dict[t];
                cnt+=4*Math.Min(x,y);
                dict.Remove(s);
                dict.Remove(t);
            }
            else{
                if(kv.Value%2==0){
                    cnt+=2*kv.Value;
                    dict.Remove(s);
                }
                else{
                    if(kv.Value>mx){
                        mx=kv.Value;
                        temp = s;
                    }
                }
            }
        }
        foreach(KeyValuePair<string,int>kv in dict){
            string s = kv.Key;
            if(s[0]==s[1]){
                if(s!=temp){
                    int r=kv.Value/2;
                    cnt+=4*r;
                    dict.Remove(s);
                }    
            }
        }
        if(temp!="-"){
            cnt+=2*dict[temp];   
        }
        return cnt;
    }
}