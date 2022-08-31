class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int ara[51];
        memset(ara,0,sizeof(ara));
        for(auto v:ranges){
            for(int i=v[0];i<=v[1];i++){
                ara[i]++;
            }
        }
        for(int i=left;i<=right;i++){
            if(ara[i]==0){
                return false;
            }
        }
        return true;
    }
};
