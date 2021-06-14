class Solution {
public:
    bool checkPowersOfThree(int n) {
        vector<int>vec;
        int x=1;
        while(x<=10000000){
            vec.push_back(x);
            x*=3;
        }
        for(int i=vec.size()-1;i>=0;i--){
            if(vec[i]<=n){
                n-=vec[i];
            }
        }
        return n==0;
    }
};
