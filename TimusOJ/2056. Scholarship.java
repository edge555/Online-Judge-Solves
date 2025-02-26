import java.util.*;
public class t2056 {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int n,a,sum=0;
        double k;
        boolean chk=false;
        n=in.nextInt();
        for (int i=0;i<n;i++)
        {
            a=in.nextInt();
            sum+=a;
            if(a==3)
                chk=true;
        }
        if(chk==true)
            System.out.println("None");
        else
        {
            k=sum/(n*1.0);
            if(k==5)
                System.out.println("Named");
            else if(k>=4.5)
                System.out.println("High");
            else
                System.out.println("Common");
        }
    }
}
