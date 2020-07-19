import java.util.LinkedList;
import java.util.Queue;

public class Solution {
    public static class node{
        public int x,y;
        public node() {
            
        }
        public node(int x,int y) {
            this.x=x;
            this.y=y;
        }
    }
    public static boolean valid(int x,int y,int n,int m) {
        return x>=0 && x<n && y>=0 && y<m;
    }
    public static int solution(int[][] map) {
        int i,j,n = map.length,m=map[0].length;
        int dx[]= {0,0,1,-1};
        int dy[]= {1,-1,0,0};
        int cost[][]=new int [n+1][m+1];
        int cost2[][]=new int [n+1][m+1];
        for(i=0;i<n;i++) {
            for(j=0;j<m;j++) {
                cost[i][j]=10000;
                cost2[i][j]=10000;
            }
        }
        Queue<node>q=new LinkedList<>();
        q.add(new node(0,0));
        cost[0][0]=1;
        while(q.size()>0) {
            node nn=new node();
            nn=q.peek();
            q.remove();
            int x=nn.x,y=nn.y;
            for(i=0;i<4;i++) {
                int xx=x+dx[i];
                int yy=y+dy[i];
                if(valid(xx,yy,n,m)) {
                    if(map[xx][yy]==0 && cost[xx][yy]==10000) {
                        cost[xx][yy]=cost[x][y]+1;
                        q.add(new node(xx,yy));
                    }
                }
            }
        }
       
        q.add(new node(n-1,m-1));
        cost2[n-1][m-1]=1;
        while(q.size()>0) {
            node nn=new node();
            nn=q.peek();
            q.remove();
            int x=nn.x,y=nn.y;
            for(i=0;i<4;i++) {
                int xx=x+dx[i];
                int yy=y+dy[i];
                if(valid(xx,yy,n,m)) {
                    if(map[xx][yy]==0 && cost2[xx][yy]==10000) {
                        cost2[xx][yy]=cost2[x][y]+1;
                        q.add(new node(xx,yy));
                    }
                }
            }
        }
        int ans=10000;
        for(i=0;i<n;i++) {
            for(j=0;j<m;j++) {
                if(map[i][j]==1) {
                    int x=i-1,y=j;
                    int xx=i+1,yy=j;
                    if(valid(x,y,n,m) && valid(xx,yy,n,m)) {
                        ans=Math.min(ans, cost[x][y]+cost2[xx][yy]+1);
                        ans=Math.min(ans, cost2[x][y]+cost[xx][yy]+1);
                    }
                    x=i;
                    y=j-1;
                    xx=i;
                    yy=j+1;
                    if(valid(x,y,n,m) && valid(xx,yy,n,m)) {
                        ans=Math.min(ans, cost[x][y]+cost2[xx][yy]+1);
                        ans=Math.min(ans, cost2[x][y]+cost[xx][yy]+1);
                    }
                }
            }
        }
        ans= Math.min(ans, cost[n-1][m-1]);
        return ans;
    }
}