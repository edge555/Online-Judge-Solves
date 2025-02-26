package timus;
import java.util.*;
public class t2066 {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int a,b,c;
        a=in.nextInt();
        b=in.nextInt();
        c=in.nextInt();
        int x,y;
        x=a-b-c;
        y=a-b*c;
        if(x<y)
            System.out.println(x);
        else
            System.out.println(y);
        System.out.flush();
    }   
}
