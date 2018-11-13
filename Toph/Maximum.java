import java.util.*;
public class Maximum {
    public static void main(String[] args) {
        Scanner sc=new Scanner (System.in);
        int n,i,k;
        n=sc.nextInt();
        int ara[]=new int[n+1];
        for(i=0;i<n;i++)
        {
            ara[i]=sc.nextInt();
        }
        sc.close();
        Arrays.sort(ara);
        System.out.println(ara[n]);
    }
}