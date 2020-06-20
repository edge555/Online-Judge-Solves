import java.util.*;
public class Practise {

    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt(),i,j;
       sc.nextLine();
       String a=sc.nextLine();
       boolean chk=false;
       for(i=0;i<n-1;i++)
       {
           if(a.charAt(i)>a.charAt(i+1))
           {
               chk=true;
               break;
           }
       }
       if(chk==true)
       {
           for(j=0;j<n;j++)
           {
               if(j!=i)
                   System.out.print(a.charAt(j));
           }
       }
       else
       {
           for(j=0;j<n-1;j++)
               System.out.print(a.charAt(j));
       }
    }
}
