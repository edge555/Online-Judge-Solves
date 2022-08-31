public class Solution {
    int sod(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    public int CountLargestGroup(int n) {
        int[] ara = new int[40];
        Array.Clear(ara,0,ara.Length);
        int mx=0;
        for(int i=1;i<=n;i++){
            int r=sod(i);
            ara[r]++;
            mx=Math.Max(mx,ara[r]);
        }
        int cnt=0;
        for(int i=1;i<=36;i++){
            if(ara[i]==mx){
                cnt++;
            }
        }
        return cnt;
    }
}