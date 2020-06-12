import java.util.*;
public class Main{
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int tc= sc.nextInt();
        while(tc-->0) {
            String a=sc.next();
            int n=a.length();
            if(a.charAt(n-1)=='a') {
                System.out.println("KOREAN");
            }
            else if(a.charAt(n-1)=='o') {
                System.out.println("FILIPINO");
            }
            else {
                System.out.println("JAPANESE");
            }
        }
    }    
}