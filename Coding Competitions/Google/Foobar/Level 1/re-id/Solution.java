public class Solution {
    public static String answer(int n) 
    { 
        int i,p;
        boolean prime[] = new boolean[100000]; 
        for(i=0;i<100000;i++) 
            prime[i] = true; 
        for(p=2;p*p<100000; p++) 
        { 
            if(prime[p]==true) 
            {  
                for(i=p*2;i<100000;i+=p) 
                    prime[i]=false; 
            } 
        }
        String s="";
        for(i=2;i<100000;i++) 
        { 
            if(s.length()>=10010)
                break;
            if(prime[i]==true) 
                s+=Integer.toString(i); 
        } 
        return s.substring(n, n+5);
    }
}