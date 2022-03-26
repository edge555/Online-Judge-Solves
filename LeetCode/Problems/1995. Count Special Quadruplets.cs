public class Solution {
    public int CountQuadruplets(int[] nums) {
        int cnt=0;
        for(int i=0;i<nums.Length-3;i++){
            for(int j=i+1;j<nums.Length-2;j++){
                for(int k=j+1;k<nums.Length-1;k++){
                    for(int l=k+1;l<nums.Length;l++){
                        if(nums[i]+nums[j]+nums[k]==nums[l]){
                            cnt++;
                        }
                    }
                }
            }
        }
        return cnt;
    }
}