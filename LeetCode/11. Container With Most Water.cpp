class Solution {
public:
    int maxArea(vector<int>& height) {
        int lo=0,hi=height.size()-1,ans=0;
        while(lo<hi){
            int area=(hi-lo)*min(height[lo],height[hi]);
            ans=max(ans,area);
            if(height[lo]<height[hi]){
                lo++;
            }
            else{
                hi--;
            }
        }
        return ans;
    }
};
