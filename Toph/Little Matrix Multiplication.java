//package acm;
import java.util.*;
class Solution {

    public static void main(String[] args) {
	   
        Scanner sc=new Scanner(System.in);
        int a11=sc.nextInt(),a12=sc.nextInt();
        int a21=sc.nextInt(),a22=sc.nextInt();
        int b11=sc.nextInt(),b12=sc.nextInt();
        int b21=sc.nextInt(),b22=sc.nextInt();
        System.out.println(((a11*b11)+(a12*b21))+" "+((a11*b12)+(a12*b22)));
        System.out.println(((a21*b11)+(a22*b21))+" "+((a21*b12)+(a22*b22)));
    }
}