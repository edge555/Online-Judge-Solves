import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        if(s.equals(new StringBuilder(s).reverse().toString()))
            System.out.println("Yes");
        else
            System.out.println("No");
    }
}