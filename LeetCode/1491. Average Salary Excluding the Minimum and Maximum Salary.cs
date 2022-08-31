public class Solution {
    public double Average(int[] salary) {
        Array.Sort(salary);
        double ans = 0;
        int mn=salary[0],mx=salary[salary.Length-1],cnt=0;
        for(int i=0;i<salary.Length;i++){
            if(salary[i]!=mn && salary[i]!=mx){
                ans+=salary[i];
                cnt++;
            }
        }
        return ans/cnt;
    }
}