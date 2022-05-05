public class Solution {
    public bool CheckString(string s) {
        int ind=-1,ind2=-1;
        for(int i=0;i<s.Length;i++){
            if(s[i]=='a'){
                ind=i;
            }
            if(s[i]=='b' && ind2==-1){
                ind2=i;
            }
        }
        if(ind==-1 || ind2==-1){
            return true;
        }
        return ind<ind2;
    }
}