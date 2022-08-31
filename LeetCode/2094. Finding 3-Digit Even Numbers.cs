public class Solution {
    public int getnum(int a,int b,int c){
        int num=a;
        num=(num*10)+b;
        num=(num*10)+c;
        return num;
    }
    public int[] FindEvenNumbers(int[] digits) {
        HashSet<int>list = new HashSet<int>();
        for(int i=0;i<digits.Length;i++){
            if(digits[i]==0){
                continue;
            }
            for(int j=0;j<digits.Length;j++){
                for(int k=0;k<digits.Length;k++){
                    if(i!=j && j!=k && i!=k && digits[k]%2==0){
                        list.Add(getnum(digits[i],digits[j],digits[k]));
                    }
                }
            }
        }
        int[] ans = list.ToArray();
        Array.Sort(ans);
        return ans;
    }
}