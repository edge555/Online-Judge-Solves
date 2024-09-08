class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        int MOD=1e9+7;
        vector<int>vec(n,1);
        for(int i=0;i<k;i++){
            for(int j=1;j<n;j++){
                vec[j]=(vec[j]%MOD +vec[j-1]%MOD)%MOD;
            }
        }
        return vec[n-1];
    }
};
