public class Solution {
    public double FindMedianSortedArrays(int[] nums1, int[] nums2) {
        int len = nums1.Length+nums2.Length;
        int[] ara = new int[len];
        int i=0,j=0,k=0;
        for(k=0;k<len;k++){
            if(i<nums1.Length && j<nums2.Length){
                if(nums1[i]>nums2[j]){
                    ara[k]=nums2[j++];
                }
                else{
                    ara[k]=nums1[i++];
                }
            }
            else{
                if(i<nums1.Length){
                    ara[k]=nums1[i++];
                }
                else{
                    ara[k]=nums2[j++];
                }
            }
        }
        double ans=0.0;
        if(len%2==1){
            ans=ara[len/2]*1.0;
        }
        else{
            ans=(ara[len/2]+ara[(len-1)/2])/2.0;
        }
        return ans;
    }
}