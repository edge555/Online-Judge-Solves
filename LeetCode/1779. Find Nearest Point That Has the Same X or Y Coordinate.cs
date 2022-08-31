public class Solution {
    public int dis(int x1,int y1,int x2,int y2){
        return Math.Abs(x1-x2)+Math.Abs(y1-y2);
    }
    public int NearestValidPoint(int x, int y, int[][] points) {
        int ans=-1;
        int ind=-1;
        for(int i=0;i<points.Length;i++){  
            int xx=points[i][0],yy=points[i][1];
            if(xx==x || yy==y){
                int r = dis(x,y,xx,yy);
                if(ans==-1){
                    ans=r;
                    ind=i;
                }
                else if(r<ans){
                    ans=r;
                    ind=i;
                }
            }
        }
        return ind;
    }
}