public class Solution {
    public int[] SearchRange(int[] nums, int target) {
        int[] ara=new int[2]{-1,-1};
        Array.Sort(nums);
        for(int i=0;i<nums.Length;i++){
            if(nums[i]==target){
                if(ara[0]==-1){
                    ara[0]=i;
                }
                ara[1]=i;
            }
        }
        return ara;
    }
}