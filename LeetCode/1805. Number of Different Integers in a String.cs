public class Solution {
    public bool isDigit(char c){
        return c>='0' && c<='9';
    }
    public string func(string num){
        string temp="";
        int j=0;
        while(j<num.Length){
            if(num[j]!='0'){
                break;
            }
            j++;
        }
        if(j==num.Length){
            return "0";
        }
        while(j<num.Length){
            temp+=num[j++];
        }
        return temp;
    }
    public int NumDifferentIntegers(string word) {
        List<string> l = new List<string>();
        string num="";
        int i=0;
        while(i<word.Length){
            if(isDigit(word[i])){
                break;
            }
            i++;
        }
        if(i==word.Length){
            return 0;
        }
        num+=word[i++];
        while(i<word.Length){
            if(isDigit(word[i])){
                num+=word[i];
            }
            else{
                if(num.Length>0){
                    string temp=func(num);
                    if(temp.Length>0){
                        l.Add(temp);
                    }
                }
                num="";
            }
            i++;
        }
        if(num.Length>0){
            string temp=func(num);
            if(temp.Length>0){
                l.Add(temp);
            }
        }
        l.Sort();
        int ans=1;
        for(i=1;i<l.Count;i++){
            if(l[i]!=l[i-1]){
                ans++;
            }
        }
        return ans;
    }
}