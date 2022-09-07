class Solution {
public:
    vector<int>closediv(int n){
        int diff=n-1;
        vector<int>vec={1,n};
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                int p=n/i;
                if(abs(p-i)<diff){
                    vec.clear();
                    vec={i,p};
                }
            }
        }
        return vec;
    }
    vector<int> closestDivisors(int num) {
        vector<int>p=closediv(num+1);
        vector<int>p2=closediv(num+2);
        if(abs(p[0]-p[1])>abs(p2[0]-p2[1])){
            return p2;
        }
        return p;
    }
};
