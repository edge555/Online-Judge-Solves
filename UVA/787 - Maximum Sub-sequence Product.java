import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer>num = new ArrayList<Integer>();
        while(sc.hasNext()){
            int cur = sc.nextInt();
            if(cur==-999999){
                BigInteger mx = BigInteger.valueOf(cur),ans = BigInteger.valueOf(0);
                int i, j;
                for(i=0;i<num.size();i++){
                    ans = BigInteger.valueOf(1);
                    for(j=i;j<num.size();j++){
                        ans = ans.multiply(BigInteger.valueOf(num.get(j)));
                        if(ans.compareTo(mx)==1){
                            mx=ans;
                        }
                    }
                }
                System.out.println(mx.toString());
                num.clear();
                System.gc();
            }
            else{
                num.add(cur);
            }
        }
    }
}
