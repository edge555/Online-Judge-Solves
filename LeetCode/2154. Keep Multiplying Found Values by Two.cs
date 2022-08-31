public class Solution {
    public int FindFinalValue(int[] nums, int original) {
        int[] vis = new int [2001];
        Array.Clear(vis, 0, vis.Length);
        for(int i=0;i<nums.Length;i++){
            vis[nums[i]]++;
        }
        while(true){
            if(vis[original]>0){
                original<<=1;
            }
            else{
                break;
            }
        }
        return original;
    }
}