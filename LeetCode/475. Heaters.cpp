class Solution {
public:
    bool possible(int mid,vector<int>& houses, vector<int>& heaters){
        int i=0,j=0;
        while(j<heaters.size()){
            int lo=heaters[j]-mid,hi=heaters[j]+mid;
            if(i<houses.size() && houses[i]<lo){
                return false;
            }
            while(i<houses.size() && houses[i]>=lo && houses[i]<=hi){
                i++;
            }
            j++;
        }
        return i==houses.size();
    }

    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        int lo=0,hi=1e9;
        int ans=-1;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(possible(mid,houses,heaters)){
                ans=mid;
                hi=mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        return ans;
    }
};
