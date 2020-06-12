import java.util.*;
public class Main{
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int i,n=sc.nextInt();
        String a = sc.next();
        int cnt=0;
        for(i=0;i<a.length();i+=2) {
            if(a.charAt(i)==a.charAt(i+1)) {
                cnt++;
            }
        }
        System.out.println(cnt);
        for(i=0;i<a.length();i+=2) {
            if(a.charAt(i)!=a.charAt(i+1)) {
                System.out.print(a.charAt(i)+""+a.charAt(i+1));
            }
            else {
                System.out.print("ab");
            }
        }
    }    
}