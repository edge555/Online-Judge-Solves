public class Solution {
    public int CountPairs(int[] nums, int k) {
        int cnt=0;
        for(int i=0;i<nums.Length-1;i++){
            for(int j=i+1;j<nums.Length;j++){
                if(nums[i]==nums[j] && (i*j)%k==0){
                    cnt++;
                }
            }
        }
        return cnt;
    }
}