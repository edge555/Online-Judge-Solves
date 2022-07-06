class Solution {
public:
    struct comp{
        bool operator()(vector<int> &a, vector<int> &b){
            return a[0]+a[1]<b[0]+b[1];
        }
    };
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<vector<int>,vector<vector<int>>,comp>pq;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(pq.size()<k){
                    pq.push({nums1[i],nums2[j]});
                }
                else if(pq.top()[0]+pq.top()[1]>nums1[i]+nums2[j]){
                    pq.pop();
                    pq.push({nums1[i],nums2[j]});
                }
                else{
                    break;
                }
            }
        }
        vector<vector<int>>vec;
        while(!pq.empty()){
            vec.push_back(pq.top());
            pq.pop();
        }
        return vec;
    }
};
