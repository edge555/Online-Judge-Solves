import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();
        while(tc-->0) {
            long n,a,b,ans1,ans2;
            n = sc.nextLong();
            a= sc.nextLong();
            b = sc.nextLong();
            ans1=n*a;
            ans2=(n/2)*b;
            if(n%2==1) {
                ans2+=a;
            }
            System.out.println(Math.min(ans1, ans2));
        }
    }
}