public class Solution {
    public IList<bool> PrefixesDivBy5(int[] nums) {
        List<bool>l = new List<bool>();
        int cur=0;
        foreach(int x in nums){
            cur=2*cur+x;
            cur%=5;
            if(cur==0){
                l.Add(true);
            }
            else{
                l.Add(false);
            }
        }
        return l;
    }
}