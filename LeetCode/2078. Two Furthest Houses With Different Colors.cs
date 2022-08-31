public class Solution {
    public int MaxDistance(int[] colors) {
        int[] st = new int[105];
        int[] en = new int[105];
        for(int i=0;i<=100;i++){
            st[i]=-1;
            en[i]=-1;
        }
        for(int i=0;i<colors.Length;i++){
            if(st[colors[i]]==-1){
                st[colors[i]]=i;
            }
            en[colors[i]]=i;
        }
        int ans=Int32.MinValue;
        for(int i=0;i<=100;i++){
            if(st[i]==-1 && en[i]==-1){
                continue;
            }
            for(int j=0;j<=100;j++){
                if(j==i || (st[j]==-1 && en[j]==-1)){
                    continue;
                }
                if(st[i]!=-1 && st[j]!=-1){
                    ans=Math.Max(ans,Math.Abs(st[i]-st[j]));
                }
                if(st[i]!=-1 && en[j]!=-1){
                    ans=Math.Max(ans,Math.Abs(st[i]-en[j]));
                }
                if(en[i]!=-1 && st[j]!=-1){
                    ans=Math.Max(ans,Math.Abs(en[i]-st[j]));
                }
                if(en[i]!=-1 && en[j]!=-1){
                    ans=Math.Max(ans,Math.Abs(en[i]-en[j]));
                }
            }
        }
        return ans;
    }
}