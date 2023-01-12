class Solution {
public:
    int minimumKeypresses(string s) {
        unordered_map<char,int>mp;
        for(auto c:s){
            mp[c]++;
        }
        vector<int>vec;
        for(auto it:mp){
            vec.push_back(it.second);
        }
        sort(vec.begin(),vec.end(),greater<int>());
        int r=9,cnt=0,k=1;
        for(int i=0;i<vec.size();i++,r--){
            if(r==0){
                k++;
                r=9;
            }
            cnt+=vec[i]*k;
        }
        return cnt;
    }
};
