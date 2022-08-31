public class Solution {
    public int FindMiddleIndex(int[] nums) {
        int sum=0;
        foreach(int n in nums){
            sum+=n;
        }
        int cur=0;
        for(int i=0;i<nums.Length;i++){
            int leftsum=sum-cur-nums[i];
            if(cur==leftsum){
                return i;
            }
            cur+=nums[i];
        }
        return -1;
    }
}