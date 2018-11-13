import java.util.*;
public class Solution {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a,b,n,i,j=0,k,p,q;
        q=sc.nextInt();
        for(p=0;p<q;p++)
        {
            j=0;
            a=sc.nextInt();
            b=sc.nextInt();
            n=sc.nextInt();
            k=a;
            for(i=0;i<n;i++)
            {
                k+=((Math.pow(2,j))*b);
                j++;
                System.out.printf("%d",k);
                if(i!=n-1)
                    System.out.printf(" ");
            }
            System.out.println("");
        }   
    }
}
