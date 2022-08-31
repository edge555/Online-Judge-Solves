public class Solution {
    public int MostFrequent(int[] nums, int key) {
        Dictionary<int,int>dict = new Dictionary<int,int>();
        for(int i=1;i<nums.Length;i++){
            if(nums[i-1]==key){
                if(dict.ContainsKey(nums[i])){
                    dict[nums[i]]++;
                }
                else{
                    dict.Add(nums[i],1);
                }
            }
        }
        int mx=-1,ans=-1;
        foreach(KeyValuePair<int,int>kv in dict){
            if(kv.Value>mx){
                mx=kv.Value;
                ans=kv.Key;
            }
        }
        return ans;
    }
}