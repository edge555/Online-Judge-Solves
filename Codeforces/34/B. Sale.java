import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int i,j=0,k,n,m;
        n=sc.nextInt();
        m=sc.nextInt();
        ArrayList<Integer>ara = new ArrayList<Integer>();
        for(i=0;i<n;i++) {
            k=sc.nextInt();
            if(k<0) {
                ara.add(k*-1);
            }
        }
        Collections.sort(ara);
        int sum=0;
        for(i=ara.size()-1;i>=0;i--) {
            if(m<=0)
                break;
            sum+=ara.get(i);
            m--;
        }
        System.out.println(sum);
    }
}