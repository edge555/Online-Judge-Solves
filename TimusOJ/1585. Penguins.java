package timus;
import java.util.*;
public class t1585 {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int  l=0,m=0,e=0,n,i,res;
        String a;
        n=in.nextInt();
        a=in.nextLine();
        for (i=0;i<n;i++)
        {
            a=in.nextLine();
            if(a.charAt(0)=='E')
                e++;
            else if(a.charAt(0)=='M')
                m++;
            else
                l++;
        }
        if(e>m)
        {
            res=1;
            n=e;
        }
        else
        {
            res=2;
            n=m;
        }
        if(n<l)
            res=3;
        if(res==1)
            System.out.println("Emperor Penguin");
        else if(res==2)
            System.out.println("Macaroni Penguin");
        else
            System.out.println("Little Penguin");
    }
}
