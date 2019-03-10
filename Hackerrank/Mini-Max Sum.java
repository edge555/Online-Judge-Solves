//package acm;
import java.util.*;
class Solution {
    public static void main(String[] args) {
	   
        Scanner sc=new Scanner(System.in);
        long[] ara=new long[5];
        int i;
        for(i=0;i<5;i++)
            ara[i]=sc.nextLong();
        Arrays.sort(ara);
        long mn=ara[0]+ara[1]+ara[2]+ara[3];
        long mx=ara[1]+ara[2]+ara[3]+ara[4];
        System.out.println(mn+" "+mx);
    }
}