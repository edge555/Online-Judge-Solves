public class Solution {
    public int[] KWeakestRows(int[][] mat, int k) {
        int n=mat.Length,m = mat[0].Length;
        int[] ara = new int[n];
        Array.Clear(ara,0,n);
        int p=0;
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    break;
                }
                cnt++;
            }
            ara[p++]=cnt;
        }
        p=0;
        int[] ans = new int[k];
        for(int x=0;x<=m;x++){
            for(int i=0;i<n;i++){
                if(p==k){
                    break;
                }
                if(ara[i]==x){
                    ans[p++]=i;
                }
            }
        }
        return ans;
    }
}