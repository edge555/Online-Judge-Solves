class Solution {
public:
    int minDeletions(string s) {
        int freq[100005];
        memset(freq,0,sizeof(freq));
        unordered_map<char,int>mp;
        for(auto c:s){
            mp[c]++;
        }
        vector<int>vec;
        for(auto it:mp){
            vec.push_back(it.second);
            freq[it.second]++;
        }
        sort(vec.begin(),vec.end(),greater<int>());
        int cnt=0;
        for(int i=0;i<vec.size();i++){
            int r=vec[i];
            if(freq[r]==1){
                continue;
            }
            freq[r]--;
            while(r>0){
                if(freq[r]!=0){
                    cnt++;
                    r--;
                }
                else{
                    freq[r]=1;
                    break;
                }
            }
        }
        return cnt;
    }
};
