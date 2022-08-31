public class Solution {
    public int CountPoints(string rings) {
        int[,] ara= new int[101,4];
        Array.Clear(ara,0,ara.Length);
        for(int i=0;i<rings.Length/2;i++){
            int ind=rings[2*i+1]-'0';
            if(rings[2*i]=='B'){
                ara[ind,0]++;
            }
            else if(rings[2*i]=='G'){
                ara[ind,1]++;
            }
            else{
                ara[ind,2]++;
            }
        }
        int ans=0;
        for(int i=0;i<101;i++){
            if(ara[i,0]>0 && ara[i,1]>0 && ara[i,2]>0){
                    ans++;
            }
        }
        return ans;    
    }
}