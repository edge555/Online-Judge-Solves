public class Solution {
    public bool CheckZeroOnes(string s) {
        int one=0,zero=0,maxone=0,maxzero=0;
        int i=1,n=s.Length,last=-1;
        if(s[0]=='1'){
            one=1;
            maxone=1;
            last=1;
        }
        else{
            zero=1;
            maxzero=1;
            last=0;
        }
        
        while(i<n){
            if(s[i]=='0'){
                if(last==0){
                    zero++;
                }
                else{
                    one=0;
                    zero=1;
                    last=0;
                }
            }
            else{
                if(last==1){
                    one++;
                }
                else{
                    zero=0;
                    one=1;
                    last=1;
                }
            }
            maxzero=Math.Max(zero,maxzero);
            maxone=Math.Max(one,maxone);
            i++;
        }
        return maxone>maxzero;
    }
}