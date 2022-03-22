public class Solution {
    bool func(int n){
        int[] freq = new int[10];
        for(int i=0;i<10;i++)
            freq[i]=0;
        int m=n;
        while(m>0){
            freq[m%10]++;
            m/=10;
        }
        if(freq[0]!=0){
            return false;
        }
        for(int i=1;i<10;i++){
            if(n%i!=0 && freq[i]>0){
                return false;
            }
        }
        return true;
    }
    public IList<int> SelfDividingNumbers(int left, int right) {
        List<int> l = new List<int>();
        for(int i=left;i<=right;i++){
            if(func(i)){
                l.Add(i);
            }
        }
        return l;
    }
}