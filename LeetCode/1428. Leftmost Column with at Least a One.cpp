class Solution {
public:
    bool haveOne(BinaryMatrix &binaryMatrix,int mid,int n){
        for(int i=0;i<n;i++){
            if(binaryMatrix.get(i,mid)){
                return true;
            }
        }
        return false;
    }
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        vector<int>vec=binaryMatrix.dimensions();
        int n=vec[0],m=vec[1];
        int lo=0,hi=m-1,ans=1e9;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(haveOne(binaryMatrix,mid,n)){
                ans=min(ans,mid);
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        if(ans==1e9){
            ans=-1;
        }
        return ans;
    }
};
