import java.util.*;
public class Cf {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int a,b,n,i,x,y,cnt=0;
		n=sc.nextInt();
		a=sc.nextInt();
		b=sc.nextInt();
		for(i=1;i<=n;i++)
		{
			x=i-1;
			y=n-i;
			System.out.println(x+" "+y);
			if(x>=a && y<=b) {
				cnt++;
			}
		}
		System.out.print(cnt);
	}
}
