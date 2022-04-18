public class Solution {
    public bool DivideArray(int[] nums) {
        Dictionary<int,int> dict = new Dictionary<int,int>();
        foreach(int x in nums){
            if(dict.ContainsKey(x)){
                dict[x]++;
            }
            else{
                dict.Add(x,1);
            }
        }
        foreach(KeyValuePair<int,int>kv in dict){
            if(kv.Value%2==1){
                return false;
            }
        }
        return true;
    }
}