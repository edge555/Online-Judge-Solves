public class Solution {
    public int FindKthPositive(int[] arr, int k) {
        int[] ara=new int[2001];
        Array.Clear(ara,0,ara.Length);
        for(int i=0;i<arr.Length;i++){
            ara[arr[i]]++;
        }
        for(int i=1;k>0;i++){
            if(ara[i]==0){
                k--;
            }
            if(k==0){
                return i;
            }
        }
        return -1;
    }
}