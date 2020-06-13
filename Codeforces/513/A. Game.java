import java.util.*;

public class Main{
       public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n1=sc.nextInt(),n2=sc.nextInt();
        int k1=sc.nextInt(),k2=sc.nextInt();
        if(n1<=n2) {
            System.out.println("Second");
        }
        else {
            System.out.println("First");
        }
    }   
}