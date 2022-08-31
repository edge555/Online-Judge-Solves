public class Solution {
    public int FindLucky(int[] arr) {
        int[] freq= new int[501];
        Array.Clear(freq,0,freq.Length);
        for(int i=0;i<arr.Length;i++){
            freq[arr[i]]++;
        }
        int ans=-1;
        for(int i=1;i<501;i++){
            if(freq[i]==i){
                ans=i;
            }
        }
        return ans;
    }
}