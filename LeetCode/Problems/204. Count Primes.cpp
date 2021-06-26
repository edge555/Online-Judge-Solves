class Solution {
public:
    int countPrimes(int n) {
        if(n<=2)
            return 0;
        int i,j;
        bool mark [n+1];
        memset(mark,true,sizeof(mark));
        for(i=4;i<=n;i+=2){
            mark[i]=false;
        }
        mark[1]=false;
        for(i=3;i*i<=n;i+=2){
            if(!mark[i])
                continue;
            for(j=i*i;j<=n;j+=i*2){
                mark[j]=false;
            }
        }
        int cnt=1;
        for(i=3;i<n;i+=2){
            cnt+=mark[i];
        }
        return cnt;

    }
};
