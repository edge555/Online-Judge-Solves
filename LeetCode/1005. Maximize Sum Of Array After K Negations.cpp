class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        vector<int>neg,pos;
        for(auto x:nums){
            if(x<0){
                neg.push_back(x);
            }
            else{
                pos.push_back(x);
            }
        }
        sort(neg.begin(),neg.end());
        int i=0;
        while(k && i<neg.size()){
            neg[i]*=-1;
            i++;
            k--;
        }
        for(auto x:neg){
            pos.push_back(x);
        }
        sort(pos.begin(),pos.end());
        if(k&1){
            pos[0]*=-1;
        }
        int sum=0;
        for(auto x:pos){
            sum+=x;
        }
        return sum;
    }
};
