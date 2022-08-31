public class Solution {
    Dictionary<string,int>dict = new Dictionary<string,int>();
    public bool isPossible(string s){
        string t="";
        foreach(char c in s){
            t+=c;
            if(!dict.ContainsKey(t)){
                return false;
            }
        }
        return true;
    }
    public string LongestWord(string[] words) {
        foreach(string s in words){
            if(!dict.ContainsKey(s)){
                dict.Add(s,1);
            }
        }
        List<string>list=new List<string>();
        foreach(string s in words){
            if(isPossible(s)){
                list.Add(s);
            }
        }
        list.Sort();
        int mx=-1;
        foreach(string s in list){
            mx=Math.Max(mx,s.Length);
        }
        foreach(string s in list){
            if(s.Length==mx){
                return s;
            }
        }
        return "";
    }
}