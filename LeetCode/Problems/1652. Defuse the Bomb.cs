public class Solution {
    public int[] Decrypt(int[] code, int k) {
        int[] ans = new int[code.Length];
        for(int i=0;i<code.Length;i++){
            if(k==0){
                ans[i]=0;
            }
            else if(k>0){
                int sum=0,cnt=k;
                for(int j=i+1;cnt>0;j++,cnt--){
                    j%=code.Length;
                    sum+=code[j];
                }
                ans[i]=sum;
            }
            else{
                int sum=0,cnt=k*-1;
                for(int j=i-1;cnt>0;j--,cnt--){
                    j+=code.Length;
                    j%=code.Length;
                    sum+=code[j];
                }
                ans[i]=sum;
            }
        }
        return ans;
    }
}