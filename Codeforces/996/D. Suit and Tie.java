import java.util.*;
public class Main{
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int i,j,n=sc.nextInt(),cnt=0;
        int[] ara=new int [2*n+1];
        for(i=0;i<2*n;i++) {
            ara[i]=sc.nextInt();
        }
        for(i=0;i<2*n;i+=2) {
            if(ara[i]==ara[i+1])
                continue;
            int ind=-1;
            for(j=i+1;j<2*n;j++) {
                if(ara[j]==ara[i])
                    break;
            }
            ind=j;
            for(j=ind;j>i+1;j--) {
                int temp=ara[j];
                ara[j]=ara[j-1];
                ara[j-1]=temp;
                cnt++;
            }
        }
        System.out.println(cnt);
     }
}