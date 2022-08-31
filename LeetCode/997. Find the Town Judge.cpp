class Solution {
public:
    int ara[1001][1001];
    int first[1001];
    int findJudge(int n, vector<vector<int>>& trust) {
        memset(ara,0,sizeof(ara));
        memset(first,0,sizeof(first));
        for(auto x:trust){
            ara[x[0]][x[1]]++;
            first[x[0]]=1;
        }
        vector<int>vec;
        for(int i=1;i<=n;i++){
            int cnt=0;
            for(int j=1;j<=n;j++){
                if(i==j){
                    continue;
                }
                cnt+=ara[j][i];
            }
            if(cnt==n-1 && !first[i]){
                vec.push_back(i);
            }
        }
        if(vec.size()!=1){
            return -1;
        }
        else{
            return vec[0];
        }
    }
};
