import java.io.IOException;
import java.math.*;
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a,b;
        while(sc.hasNextInt())
        {
            a=sc.nextInt();
            b=sc.nextInt();
            BigInteger sum=new BigInteger("0");
            BigInteger temp = BigInteger.valueOf(b);
            int i;
            for(i=1;i<=a;i++)
                sum=sum.add(BigInteger.valueOf(i).multiply(temp.pow(i)));
            System.out.println(sum);
        }
    }
}