class Solution {
public:
    bool possible(int mid,vector<int>&vec,int &m){
        int k=0,left=vec[0],right=vec[vec.size()-1];
        for(int i=1;i<vec.size()-1;i++){
            if(abs(vec[i]-left)>=mid && abs(vec[i]-right)>=mid){
                k++;
                left=vec[i];
            }
        }
        return k>=m-2;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int lo=1,hi=position[position.size()-1]-position[0],ans=0;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(possible(mid,position,m)){
                ans=max(ans,mid);
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        if(ans==0){
            ans=position[position.size()-1]-position[0];
        }
        return ans;
    }
};
