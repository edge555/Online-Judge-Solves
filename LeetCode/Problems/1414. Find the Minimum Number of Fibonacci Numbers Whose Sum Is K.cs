public class Solution {
    public int FindMinFibonacciNumbers(int k) {
        List<int>l = new List<int>();
        l.Add(1);
        l.Add(2);
        for(int i=2;;i++){
            int r=l[i-1]+l[i-2];
            if(r>1e9){
                break;
            }
            l.Add(r);
        }
        int ans=0;
        for(int i=l.Count-1;i>=0;i--){
            if(l[i]>=1){
                int r=k/l[i];
                ans+=r;
                k%=l[i];
            }
        }
        return ans;
    }
}