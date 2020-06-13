import java.util.*;

public class Main{
       public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int i,n=sc.nextInt(),k;
        int[] ara=new int[n+1];
        for(i=1;i<=n;i++) {
            ara[i]=sc.nextInt();
        }
        for(i=1;i<=n;i++) {
            int a=ara[i];
            int b=ara[a];
            if(ara[b]==i) {
                System.out.println("YES");
                System.exit(0);
            }
        }
        System.out.println("NO");
    }   
}