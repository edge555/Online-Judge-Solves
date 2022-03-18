public class Solution {
    public int numberOfDigit(int n){
        int cnt=0;
        while(n>0){
            cnt++;
            n/=10;
        }
        return cnt;
    }
    public bool isSame(int a,int b){
        int r=numberOfDigit(a);
        int[] ara = new int[r];
        int[] ara2 = new int[r];
        int i=0;
        while(a>0){
            ara[i++]=a%10;
            a/=10;
        }
        i=0;
        while(b>0){
            ara2[i++]=b%10;
            b/=10;
        }
        Array.Sort(ara);
        Array.Sort(ara2);
        return Enumerable.SequenceEqual(ara, ara2);
    }
    public bool ReorderedPowerOf2(int n) {
        int num=1;
        while(true){
            if(numberOfDigit(num)>numberOfDigit(n)){
                break;
            }
            if(numberOfDigit(num)==numberOfDigit(n)){
                if(isSame(num,n)){
                    return true;
                }
            }
            num*=2;
        }
        return false;
    }
}