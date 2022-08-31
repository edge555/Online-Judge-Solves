public class Solution {
    public int CountElements(int[] nums) {
        Array.Sort(nums);
        int mn=nums[0],mx=nums[nums.Length-1];
        int cnt=0;
        for(int i=1;i<nums.Length-1;i++){
            if(nums[i]>mn && nums[i]<mx){
                cnt++;
            }
        }
        return cnt;
    }
}