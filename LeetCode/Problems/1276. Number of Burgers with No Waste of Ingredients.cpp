class Solution {
public:
    int calc(int small,int cheese){
        int big=cheese-small;
        int tot=2*small+4*big;
        return tot;
    }
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        int lo=0,hi=cheeseSlices;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            int r=calc(mid,cheeseSlices);
            if(r<=tomatoSlices){
                hi=mid-1;
                if(r==tomatoSlices){
                    return {cheeseSlices-mid,mid};
                }
            }
            else{
                lo=mid+1;
            }
        }
        return {};
    }
};
