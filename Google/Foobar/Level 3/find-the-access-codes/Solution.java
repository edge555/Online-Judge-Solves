public class Solution {
    public static int solution(int[] l) {
        int i,j,n=l.length,cnt;
        if(n<=2) {
            return 0;
        }
        int ara[]=new int[n+1];
        for(i=0;i<n;i++) {
            cnt=0;
            for(j=i+1;j<n;j++) {
                if(l[j]%l[i]==0) {
                    cnt++;
                }
            }
            ara[i]=cnt;
        }
        cnt=0;
        for(i=0;i<n-2;i++) {
            for(j=i+1;j<n-1;j++) {
                if(l[j]%l[i]==0) {
                    cnt+=ara[j];
                }
            }
        }
        return cnt;
    }
}