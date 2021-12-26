class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int>mp;
        for(auto x:arr){
            mp[x]++;
        }
        vector<int>vec;
        for(auto it:mp){
            vec.push_back(it.second);
        }
        sort(vec.begin(),vec.end(),greater<int>());
        int i=0,sum=0,cnt=0;
        while(sum<arr.size()/2 && i<arr.size()){
            cnt++;
            sum+=vec[i++];
        }
        return cnt;
    }
};
