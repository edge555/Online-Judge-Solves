import java.util.*;
public class Main{
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        long a=sc.nextLong(),b=sc.nextLong();
        long r=a/b;
        if(r%2==1) {
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }
    }    
}