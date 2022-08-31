public class Solution {
    static public bool possible(int[] nums,int k,int mid){
        int st = 0, en = mid-1, sum = 0;
        for(int i = st; i <= en; i++){
            sum += nums[i];
        }
        if (sum + k >= mid){
            return true;
        }
        while (true){
            en++;
            if (en >= nums.Length){
                break;
            }
            sum += nums[en];
            sum -= nums[st];
            st++;
            if (sum + k >= mid){
                return true;
            }
        }
        return false;
    }
    public int LongestOnes(int[] nums, int k) {
        int lo = 0 ,hi= nums.Length,ans=-1;
        while(lo <= hi){
            int mid = (lo + hi) >> 1;
            if (possible(nums,k,mid)){
                ans = mid;
                lo = mid + 1;
            }
            else{
                hi = mid - 1;
            }
        }
        return ans;
    }
}