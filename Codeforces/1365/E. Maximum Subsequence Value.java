import java.util.*;

public class Main{
       public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int i,j,k,n=sc.nextInt();
        long[] ara=new long[n+1];
        for(i=0;i<n;i++) {
            ara[i]=sc.nextLong();
        }
        long ans=0;
        for(i=0;i<n;i++) {
            for(j=i;j<n;j++) {
                for(k=j;k<n;k++) {
                    ans=Math.max(ans,ara[i] | ara[j] | ara[k]);
                }
            }
        }
        System.out.println(ans);
    }   
}