class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto x:mp){
            pq.push({x.second,x.first});
        }
        vector<int>vec;
        while(pq.size()>1){
            auto f=pq.top();
            pq.pop();
            auto s=pq.top();
            pq.pop();
            vec.push_back(f.second);
            vec.push_back(s.second);
            f.first--;
            s.first--;
            if(f.first){
                pq.push(f);
            }
            if(s.first){
                pq.push(s);
            }
        }
       if(!pq.empty()){
            vec.push_back(pq.top().second);
        }
        return vec;
    }
};
