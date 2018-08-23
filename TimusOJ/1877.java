package Timus;
import java.util.Scanner;

public class t1877 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		int frlk = Integer.parseInt(in.next());
		int sclk = Integer.parseInt(in.next());
		boolean chk = false;	
		int tfcd = 0;
	
		while(tfcd <= frlk || tfcd <= sclk)
		{
			if ((tfcd%2==0) && tfcd == frlk)
			{
				System.out.println("yes");
				chk = true;
				break;
			}
			else if ((tfcd%2==1) && tfcd == sclk)
			{
				System.out.println("yes");
				chk = true;
				break;
			}
			tfcd++;			
		}
		if (!chk)
			System.out.println("no");
	}
}
