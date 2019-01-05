import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int tc=sc.nextInt();
        sc.nextLine();
        while(tc-->0)
        {
            String a=sc.nextLine();
            int sum=0,sum2=-1,i;
            boolean chk=true;
            for(i=0;i<a.length();i++)
            {
                if(a.charAt(i)=='1')
                {
                    sum2+=a.charAt(i)-'0';
                    if(chk)
                    {
                        while(a.charAt(i)=='1' && chk)
                        {
                             sum+=a.charAt(i)-'0';
                             sum2+=a.charAt(i)-'0';
                                i++;
                             if(i==a.length())
                             {
                                 chk=false;
                                 break;
                             }
                        }
                        chk=false;
                    }
                }
            }
            if(sum==sum2 && sum+sum2!=0)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }  
}
