class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int ara[10001];
        memset(ara,-1,sizeof(ara));
        stack<int>s;
        for(int x:nums2){
            if(s.empty()){
                s.push(x);
            }
            else{
                while(!s.empty() && s.top()<x){
                    ara[s.top()]=x;
                    s.pop();
                }
                s.push(x);
            }
        }
        vector<int>ans;
        for(int x:nums1){
            ans.push_back(ara[x]);
        }
        return ans;
    }
};
