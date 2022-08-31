public class Solution {
    public string ReversePrefix(string word, char ch) {
        int ind=-1;
        for(int i=0;i<word.Length;i++){
            if(word[i]==ch){
                ind=i;
                break;
            }
        }
        if(ind==-1){
            return word;
        }
        char[] ara = word.ToCharArray();
        for(int i=0;i<=ind/2;i++){
            char temp=ara[i];
            ara[i]=ara[ind-i];
            ara[ind-i]=temp;
        }
        string ans=new string(ara);
        return ans;
    }
}