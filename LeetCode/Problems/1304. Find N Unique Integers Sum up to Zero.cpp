class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>vec;
        int i,sum=0;
        for(i=1;i<=n-1;i++){
            vec.push_back(i);
            sum+=i;
        }
        vec.push_back(sum*-1);
        return vec;
    }
};
