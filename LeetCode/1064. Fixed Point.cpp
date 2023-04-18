class Solution {
public:
    int fixedPoint(vector<int>& arr) {
        int ind=-1;
        int lo=0,hi=arr.size()-1;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(arr[mid]==mid){
                ind=mid;
                hi=mid-1;
            }
            else if(arr[mid]>mid){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return ind;
    }
};
