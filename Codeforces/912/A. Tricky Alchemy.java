import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a,b,x,y,z;
        a=sc.nextLong();
        b=sc.nextLong();
        x=sc.nextLong();
        y=sc.nextLong();
        z=sc.nextLong();
        long sum=0,yellow=x*2+y,blue=y+z*3;
        if(yellow-a>0) {
            sum+=yellow-a;
        }
        if(blue-b>0) {
            sum+=blue-b;
        }
        System.out.println(sum);
    }
}