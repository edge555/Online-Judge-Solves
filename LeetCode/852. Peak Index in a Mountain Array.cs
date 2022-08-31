public class Solution {
    public int PeakIndexInMountainArray(int[] arr) {
        int mx=-1,ind=-1;
        for(int i=0;i<arr.Length;i++){
            if(arr[i]>mx){
                mx=arr[i];
                ind=i;
            }
        }
        return ind;
    }
}