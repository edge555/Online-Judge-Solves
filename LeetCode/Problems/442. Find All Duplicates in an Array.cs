public class Solution {
    public IList<int> FindDuplicates(int[] nums) {
        int[] freq=new int[100005];
        Array.Clear(freq,0,freq.Length);
        List<int> ans = new List<int>();
        foreach(int i in nums){
            freq[i]++;
            if(freq[i]==2){
                ans.Add(i);
            }
        }
        return ans;
    }
}