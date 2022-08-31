public class Solution {
    public int MinimumCost(int[] cost) {
        Array.Sort(cost);
        int k=0;
        int sum=0;
        for(int i=cost.Length-1;i>=0;i--){
            k=(k+1)%3;
            if(k!=0){
                sum+=cost[i];
            }
        }
        return sum;
    }
}