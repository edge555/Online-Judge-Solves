public class Solution {
    public IList<int> FindLonely(int[] nums) {
        List<int>ans = new List<int>();
        Dictionary<int,int>dict = new Dictionary<int,int>();
        int mx=-1;
        foreach(int i in nums){
            mx=Math.Max(mx,i);
            if(!dict.ContainsKey(i)){
                dict.Add(i,1);
            }
            else{
                dict[i]++;
            }
        }
        for(int i=0;i<=mx;i++){
            if(dict.ContainsKey(i)){
                int r=dict[i];
                if(r==1){
                    if(!dict.ContainsKey(i-1) && !dict.ContainsKey(i+1)){
                        ans.Add(i);
                    }
                }
            }
        }
        return ans;
    }
}