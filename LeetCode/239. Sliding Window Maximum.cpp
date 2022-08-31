class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int>ms;
        for(int i=0;i<k;i++){
            ms.insert(nums[i]);
        }
        vector<int>vec;
        vec.push_back(*ms.rbegin());
        int st=0,en=k-1;
        while(en<nums.size()-1){
            ms.erase(ms.find(nums[st]));
            st++;
            en++;
            ms.insert(nums[en]);
            vec.push_back(*ms.rbegin());
        }
        return vec;
    }
};
