class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b){
        double x=(a[0]*1.0)/a[1];
        double y=(b[0]*1.0)/b[1];
        return x>y;
    }
    double maxPrice(vector<vector<int>>& items, int capacity) {
        sort(items.begin(),items.end(),comp);
        double tot=0;
        for(auto v:items){
            if(!capacity){
                break;
            }
            if(v[1]<=capacity){
                capacity-=v[1];
                tot+=v[0];
            }
            else{
                tot+=capacity*((double(v[0]*1.0))/v[1]);
                capacity=0;
            }
        }
        if(capacity){
            tot=-1.00000;
        }
        return tot;
    }
};
