class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1, zero = 0;
        for(auto x:nums){
            if(x==0){
                zero++;
            }
            else{
                prod *= x;
            }
        }
        vector<int>vec;
        for(auto x:nums){
            if(zero){
                if(zero > 1){
                    vec.push_back(0);
                }
                else{
                    if(x == 0){
                        vec.push_back(prod);
                    }
                    else{
                        vec.push_back(0);
                    }
                }
            }
            else{
                vec.push_back(prod/x);
            }
        }
        return vec;
    }
};
