class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int>pos,neg;
        for(auto x:nums){
            if(x<0){
                neg.push(x);
            }
            else{
                pos.push(x);
            }
        }
        vector<int>vec;
        while(!pos.empty()){
            vec.push_back(pos.front());
            vec.push_back(neg.front());
            pos.pop();
            neg.pop();
        }
        return vec;
    }
};
