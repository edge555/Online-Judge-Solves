class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int cnt=0,i=0,j=n-1,mn,mx=0;
        while(i<=j){
           mn=min(height[i],height[j]);
           mx=max(mx,mn);
           cnt+=mx-mn;
           if(height[i]<height[j]){
                i++;
           }
           else{
                j--;
           }
        }
        return cnt;
    }
};
