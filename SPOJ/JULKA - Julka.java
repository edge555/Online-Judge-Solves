package acm;
import java.math.BigInteger;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
	   
        Scanner in = new Scanner(System.in);
        int tc=10;
        while(tc-->0)
        {
            BigInteger a,b,c,d;
            a=in.nextBigInteger();
            b=in.nextBigInteger();
            c=a.subtract(b);
            c=c.divide(BigInteger.valueOf(2));
            d=a.subtract(c);
            System.out.println(d+"\n"+c);
        }
    }
}