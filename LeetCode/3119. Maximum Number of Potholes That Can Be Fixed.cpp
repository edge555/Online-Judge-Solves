class Solution {
public:
    int maxPotholes(string road, int budget) {
        vector<int>vec;
        int cnt=0;
        for(auto c:road){
            if(c=='x'){
                cnt++;
            }
            else{
                if(cnt){
                    vec.push_back(cnt);
                }
                cnt=0;
            }
        }
        if(cnt){
            vec.push_back(cnt);
        }
        sort(vec.begin(),vec.end(),greater<int>());
        int ans=0;
        for(auto x:vec){
            if(x+1<=budget){
                ans+=x;
                budget-=(x+1);
            }
            else{
                ans+=max(0,budget-1);
                break;
            }
        }
        return ans;
    }
};
