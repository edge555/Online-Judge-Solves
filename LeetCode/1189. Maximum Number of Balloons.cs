public class Solution {
    public int MaxNumberOfBalloons(string text) {
        Dictionary<char,int>dict = new Dictionary<char,int>();
        foreach(char c in text){
            if(!dict.ContainsKey(c)){
                dict.Add(c,1);
            }
            else{
                dict[c]++;
            }
        }
        if(!dict.ContainsKey('a') || !dict.ContainsKey('b') || !dict.ContainsKey('l') || !dict.ContainsKey('o') || !dict.ContainsKey('n')){
            return 0;
        }
        int a=dict['a'],b=dict['b'],l=dict['l']/2;
        int o=dict['o']/2,n=dict['n'];
        return Math.Min(a,Math.Min(b,Math.Min(l,Math.Min(o,n))));
    }
}