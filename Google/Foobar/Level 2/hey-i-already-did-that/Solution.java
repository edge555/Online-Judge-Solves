import java.util.Arrays;
import java.util.HashMap;

public class Solution {
    public static int solution(String n, int b) {
        HashMap<String,Integer>mp=new HashMap<String,Integer>();
        int itr=0,ans=-1;
        String cur=n;
        int len=n.length();
        while(true) {
           
            String temp=cur;
            if(mp.containsKey(temp)) {
                ans=itr-mp.get(temp);
                break;
            }
            mp.put(temp,itr);
            char[] ch=temp.toCharArray();
            Arrays.sort(ch);
            String s = new String(ch);
            String t=new StringBuilder(s).reverse().toString();
            int x =Integer.parseInt(s,b);
            int y =Integer.parseInt(t,b);
            String res = Integer.toString(y-x,b);
            String zero="";
            for(int i=0;i<len-res.length();i++) {
                zero+="0";
            }
            res=zero+res;
            cur=res;
            itr++;
        }
        return ans;
    }
}