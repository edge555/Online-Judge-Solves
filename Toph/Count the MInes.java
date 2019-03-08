//package acm;
import java.util.*;
class Solution {

    public static void main(String[] args) {
	   
        Scanner sc = new Scanner(System.in);
        String a=sc.nextLine();
        int i,j,cnt=0;
        for(j=0;j<a.length();j++)
        {
            if(a.charAt(j)=='m')
                cnt++;
        }
        for(i=0;i<a.length()-1;i++)
        {
            a=sc.nextLine();
            for(j=0;j<a.length();j++)
            {
                if(a.charAt(j)=='m')
                    cnt++;
            }
        }
        System.out.println(cnt);
    }
}