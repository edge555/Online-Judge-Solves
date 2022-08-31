class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int ara[2060];
        memset(ara,0,sizeof(ara));
        for(auto vec:logs){
            for(int i=vec[0];i<vec[1];i++){
                ara[i]++;
            }
        }
        int mx=-1;
        for(int i=1950;i<=2050;i++){
            mx=max(mx,ara[i]);
        }
        for(int i=1950;i<=2050;i++){
            if(ara[i]==mx){
                return i;
            }
        }
        return -1;
    }
};
