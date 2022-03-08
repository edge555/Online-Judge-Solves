public class Solution {
    public int FindPeakElement(int[] nums) {
        int mx=nums[0],ind=0;
        for(int i=0;i<nums.Length;i++){
            if(nums[i]>mx){
                mx=nums[i];
                ind=i;
            }
        }
        return ind;
    }
}