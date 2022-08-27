public class Solution {
    public static int[] solution(int h, int[] q) {
        int i,root = (int) (Math.pow(2,h)-1),len=q.length;
        int ara[]=new int[len],ind=0;
        for(i=0;i<q.length;i++) {
            int now=q[i],par = -1,cur=root,lvl=h-1;
            if(now==root) {
                ara[ind++]=-1;
                continue;
            }
            while(true) {
                int right=cur-1;
                int diff=(int) (Math.pow(2, lvl)-1);
                int left=right-diff;
                par=cur;
                if(left==now || right==now) {
                    break;
                }
                if(now<=left) {
                    cur=left;
                }
                else {
                    cur=right;
                }
                lvl--;
            }
            ara[ind++]=par;
        }
        return ara;
    }
}