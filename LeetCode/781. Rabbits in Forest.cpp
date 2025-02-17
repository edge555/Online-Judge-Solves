class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> mp;
        int cnt=0;
        for(auto x:answers){
            if(++mp[x]==1){
                cnt+=(x+1);
            }
            if(mp[x]==x+1){
                mp[x]=0;
            }
        }
        return cnt;
    }
};
