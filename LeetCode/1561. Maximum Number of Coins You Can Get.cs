public class Solution {
    public int MaxCoins(int[] piles) {
        Array.Sort(piles);
        int sum=0,n=piles.Length;
        for(int i=n-1,j=n-2,r=n/3;r>0;i-=2,j-=2,r--){
            sum+=piles[j];
        }
        return sum;
    }
}