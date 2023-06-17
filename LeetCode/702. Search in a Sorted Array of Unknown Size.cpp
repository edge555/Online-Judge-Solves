class Solution {
public:
    int search(const ArrayReader& reader, int target) {
        int lo=0,hi=9999;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            int p=reader.get(mid);
            if(p==INT_MAX){
                hi=mid-1;
            }
            else if(p==target){
                return mid;
            }
            else if(p>target){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return -1;
    }
};
