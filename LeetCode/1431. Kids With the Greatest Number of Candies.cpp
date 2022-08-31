class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx=0;
        for(auto x:candies){
            mx=max(mx,x);
        }
        vector<bool>vec;
        for(auto x:candies){
            if(x+extraCandies>=mx){
                vec.push_back(true);
            }
            else{
                vec.push_back(false);
            }
        }
        return vec;
    }
};
