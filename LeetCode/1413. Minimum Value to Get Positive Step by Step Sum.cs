public class Solution {
    public int MinStartValue(int[] nums) {
        int st=1,ans=1;
        foreach(int x in nums){
            int p=x+st;
            if(p<1){
                int r=(p*-1)+1;
                ans+=r;
                st=1;
            }
            else{
                st=p;
            }
        }
        return ans;
    }
}