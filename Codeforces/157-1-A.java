import java.util.*;
public class Cf {

	public static void main(String[] args) {
		Scanner sc;
		sc=new Scanner(System.in);
		String a;
		a=sc.nextLine();
		boolean one=false,zero=false;
		int i;
		for(i=0;i<a.length();i++)
		{
			if(a.charAt(i)=='1')
				one=true;
			if(a.charAt(i)=='0')
				zero=true;
		}
		boolean chk=false;
		if(one && zero)
		{
			for(i=0;i<a.length();i++)
			{
				if(a.charAt(i)=='0' && !chk)
				{
					chk=true;
					continue;
				}
				System.out.print(a.charAt(i));
			}
		}
		else if(one && a.length()==1)
			System.out.println("0");
		else
		{
			if(one && !zero)
			{
				for(i=0;i<a.length();i++)
				{
					if(a.charAt(i)=='1' && !chk)
					{
						chk=true;
						continue;
					}
					System.out.print(a.charAt(i));
				}
			}
			else
			{ 
				System.out.println("0");
			}
		}
		sc.close();
	}

}
