import java.util.*;
public class Assad {

	public static void main(String[] args) {
		Scanner sc;
		sc = new Scanner(System.in);
		int n=sc.nextInt(),i;
		if(n%2==0)
		{
			System.out.println(n/2);
			for(i=0;i<n/2;i++)
			{
				System.out.printf("2 ");
			} 
		}
		else
		{
			if(n==3)
				System.out.printf("1\n3");
			else
			{
				n-=3;
				System.out.println((n/2)+1);
				for(i=0;i<n/2;i++)
				{
					System.out.printf("2 ");
				}
				System.out.println("3");
			}
		}
		sc.close();
	}

}
