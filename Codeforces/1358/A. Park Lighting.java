import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();
        while(tc-->0) {
            int a,b;
            a=sc.nextInt();
            b=sc.nextInt();
            int r=a*b;
            if(r%2==0) {
                r/=2;
            }
            else {
                r=(r/2)+1;
            }
            System.out.println(r);
        }
    }
}