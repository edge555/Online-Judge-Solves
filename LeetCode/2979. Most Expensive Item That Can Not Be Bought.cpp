class Solution {
public:
    bool vis[100005];
    int mostExpensiveItem(int primeOne, int primeTwo) {
        int lastConsPossible=0;
        int lcm=primeOne*primeTwo;
        for(int i=2;i<100005;i++){
            if(lastConsPossible>=lcm){
                vis[i]=true;
                continue;
            }
            if(i%primeOne==0 || i%primeTwo==0){
                vis[i]=true;
                lastConsPossible++;
            }
            else if(i-primeOne>0){
                if(vis[i-primeOne]){
                    vis[i]=true;
                    lastConsPossible++;
                }
            }
            else if(i-primeTwo>0){
                if(vis[i-primeTwo]){
                    vis[i]=true;
                    lastConsPossible++;
                }
            }
            else{
                vis[i]=false;
                lastConsPossible=0;
            }
        }
        int ans=-1;
        for(int i=1;i<100000;i++){
            if(!vis[i]){
                ans=i;
            }
        }
        return ans;
    }
};
