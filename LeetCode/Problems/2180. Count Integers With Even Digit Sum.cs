public class Solution {
    int sodEven(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return 1-sum%2;
    }
    public int CountEven(int num) {
        int cnt=0;
        for(int i=2;i<=num;i++){
            cnt+=sodEven(i);
        }
        return cnt;
    }
}