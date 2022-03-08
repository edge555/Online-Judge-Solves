public class Solution {
    public IList<int> TargetIndices(int[] nums, int target) {
        Array.Sort(nums);
        List<int>l = new List<int>();
        for(int i=0;i<nums.Length;i++){
            if(nums[i]==target){
                l.Add(i);
            }
        }
        return l;
    }
}