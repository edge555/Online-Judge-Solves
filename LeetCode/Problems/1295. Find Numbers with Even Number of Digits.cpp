class Solution {
public:
    int nod(int n){
        int cnt=0;
        while(n>0){
            cnt++;
            n/=10;
        }
        return cnt;
    }
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        for(auto x:nums){
            cnt+=nod(x)%2==0;
        }
        return cnt;
    }
};
