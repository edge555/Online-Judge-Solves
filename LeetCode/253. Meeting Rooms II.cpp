class Solution {
public:
    int freq[1000005];
    int minMeetingRooms(vector<vector<int>>& intervals) {
        memset(freq,0,sizeof(freq));
        for(auto v:intervals){
            freq[v[0]+1]++;
            freq[v[1]+1]--;
        }
        for(int i=1;i<1000005;i++){
            freq[i]+=freq[i-1];
        }
        int mx=-1;
        for(int i=0;i<1000005;i++){
            mx=max(mx,freq[i]);
        }
        return mx;
    }
};
