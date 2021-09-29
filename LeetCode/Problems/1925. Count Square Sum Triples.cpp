class Solution {
public:
    int countTriples(int n) {
        int i,j,k,cnt=0;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                int x=(i*i)+(j*j);
                int r=sqrt(x);
                if(r*r==x && r<=n){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
