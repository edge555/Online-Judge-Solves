public class Solution {
    public double TrimMean(int[] arr) {
        Array.Sort(arr);
        int n=arr.Length;
        int rem=n/20;
        double sum=0.0;
        for(int i=rem;i<n-rem;i++){
            sum+=arr[i];
        }
        return sum/(n-(2*rem));
    }
}