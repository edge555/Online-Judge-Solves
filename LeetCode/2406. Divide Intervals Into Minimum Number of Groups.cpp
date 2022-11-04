class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int>freq(1000005,0);
        freq[1000001]=0;
        for(auto v:intervals){
            int l=v[0],r=v[1];
            freq[l]++;
            freq[r+1]--;
        }
        for(int i=1;i<=1000001;i++){
            freq[i]+=freq[i-1];
        }
        int mx=0;
        for(int i=0;i<1000005;i++){
            mx=max(mx,freq[i]);
        }
        return mx;
    }
};
