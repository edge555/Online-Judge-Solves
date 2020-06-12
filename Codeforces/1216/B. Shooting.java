import java.util.*;

public class Main{
    static class Pair{
        int x,y;
        public Pair(int x,int y) {
            this.x=x;
            this.y=y;
        }
    }
    static class Compare { 
        
        void compare(Pair arr[], int n) 
        { 
            Arrays.sort(arr, new Comparator<Pair>() { 
                @Override public int compare(Pair p1, Pair p2) 
                { 
                    return p1.x - p2.x; 
                } 
            });       
        }
    } 
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int i,n,k;
        n = sc.nextInt();
        Pair ara[]=new Pair[n];
        for(i=0;i<n;i++) {
            k=sc.nextInt();
            ara[i]=new Pair(k,i+1);
        }
        Compare obj = new Compare();
        obj.compare(ara,n);
        ArrayList<Integer>vec=new ArrayList<Integer>();
        int ans=0,j=0;
        for(i=n-1;i>=0;i--,j++) {
            ans+=(j*ara[i].x)+1;
            vec.add(ara[i].y);
        }
        System.out.println(ans);
        for(i=0;i<vec.size();i++) {
            System.out.print(vec.get(i)+" ");
        }
    }    
}