class Solution {
public:
    int rev(int n)
    {
        int x=0;
        while(n>0){
            x*=10 ;
            x+=(n%10);
            n/=10;
        }
        return x;

    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }

        for (int i=0;i<nums.size();i++){
            int temp=rev(nums[i]);
            st.insert(temp);
        }
        return st.size();
    }
};
