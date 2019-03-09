//package acm;
import java.util.*;
class Solution {

    public static void main(String[] args) {
	   
        Scanner sc = new Scanner(System.in);
        int n,a,b;
        n=sc.nextInt();
        a=sc.nextInt();
        b=sc.nextInt();
        int i,x,y,z;
        boolean chk=true;
        for(i=0;i<n;i++)
        {
            x=sc.nextInt();
            y=sc.nextInt();
            z=sc.nextInt();
            
            if(y>a)
            {
                System.out.println("CLE");
                chk=false;
                break;
            }
            else if(z>b)
            {
                System.out.println("MLE");
                chk=false;
                break;
            }
            else if(x!=0)
            {
                System.out.println("WA");
                chk=false;
                break;
            }
        }
        if(chk)
            System.out.println("AC");
    }
}