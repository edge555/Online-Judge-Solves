class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>freq(n+5,0);
        freq[n+1]=0;
        for(auto v:bookings){
            int l=v[0],r=v[1],p=v[2];
            freq[l]+=p;
            freq[r+1]-=p;
        }
        for(int i=1;i<=n+1;i++){
            freq[i]+=freq[i-1];
        }
        freq.erase(freq.begin());
        freq.resize(n);
        return freq;
    }
};
