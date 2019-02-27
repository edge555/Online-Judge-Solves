import java.util.*;

public class Solution {

    static boolean isAnagram(String a, String b) {
        String aa=a.toLowerCase();
        String bb=b.toLowerCase();
        char[] c = aa.toCharArray();  
        java.util.Arrays.sort(c);   
        String x = new String(c);

        char[] d = bb.toCharArray();  
        java.util.Arrays.sort(d);   
        String y = new String(d);

        boolean ans=x.equals(y);  
        return ans;
    }

  public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}