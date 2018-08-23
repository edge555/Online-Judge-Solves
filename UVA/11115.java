import java.util.Scanner;
import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.math.BigInteger;

class Main {
	
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
		while(true)
		{
			int n = sc.nextInt();
			int p = sc.nextInt();
			
			if(n == 0 && p == 0)
				break;

		        System.out.println(BigInteger.valueOf(n).pow(p));
		}
	}
}