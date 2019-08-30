import java.math.BigInteger;
import java.util.Scanner;
class Main {
	public static void main(String args[]) {
		Scanner sc= new Scanner(System.in);
		int t,tc=sc.nextInt();
		for(t=1;t<=tc;t++) {
			int i,n=sc.nextInt();
			BigInteger x = sc.nextBigInteger(); 
			BigInteger y = sc.nextBigInteger();
			BigInteger ans=lcm(x,y);
			for(i=0;i<n-2;i++) {
				x = sc.nextBigInteger();
				ans = lcm(ans,x);
			}
			System.out.println("Case "+t+": "+ans);
			System.gc();
		}
	}
	public static BigInteger lcm(BigInteger a,BigInteger b) {
		BigInteger l=(a.multiply(b)).divide(a.gcd(b));
		return l;
	}
}
