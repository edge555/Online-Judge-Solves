class Solution {
public:
    int minimumSum(int num) {
        vector<int>vec;
        while(num){
            vec.push_back(num%10);
            num/=10;
        }
        sort(vec.begin(),vec.end());
        if(vec[3]==0){
            return 0;
        }
        else if(vec[2]==0){
            return vec[3];
        }
        else if(vec[1]==0){
            return vec[2]+vec[3];
        }
        else if(vec[0]==0){
            return vec[3]+(vec[1]*10+vec[2]);
        }
        else{
            return ((vec[0]*10+vec[3]) + (vec[1]*10+vec[2]));
        }
    }
};
