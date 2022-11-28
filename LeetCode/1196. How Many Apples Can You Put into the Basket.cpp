class Solution {
public:
    int maxNumberOfApples(vector<int>& weight) {
        sort(weight.begin(),weight.end());
        int cnt=0,sum=0;
        for(auto x:weight){
            sum+=x;
            if(sum>5000){
                break;
            }
            cnt++;
        }
        return cnt;
    }
};
