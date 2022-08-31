class Solution {
public:
    vector<pair<int,int>>diff;
    bool possible(int mid,vector<int>& heights,int bricks,int ladders){
        vector<int>vec;
        for(auto p:diff){
            if(p.second>mid){
                break;
            }
            vec.push_back(p.first);
        }
        sort(vec.begin(),vec.end());
        int i;
        for(i=0;i<vec.size();i++){
            if(bricks-vec[i]>=0){
                bricks-=vec[i];
            }
            else{
                break;
            }
        }
        return i+ladders>=vec.size();
    }
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        for(int i=1;i<heights.size();i++){
            if(heights[i]>heights[i-1]){
                diff.push_back({heights[i]-heights[i-1],i});
            }
        }
        int ans=0,lo=0,hi=heights.size()-1;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(possible(mid,heights,bricks,ladders)){
                lo=mid+1;
                ans=max(ans,mid);
            }
            else{
                hi=mid-1;
            }
        }
        return ans;
    }
};
