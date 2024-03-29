class Solution {
public:
    int digsum(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int,int>maxx,maxx2;
        unordered_map<int,int>freq;
        for(auto x:nums){
            int r=digsum(x);
            freq[r]++;
            if(!maxx.count(r)){
                maxx[r]=x;
                continue;
            }

            if(!maxx2.count(r)){
                if(x>=maxx[r]){
                    maxx2[r]=maxx[r];
                    maxx[r]=x;
                }
                else{
                    maxx2[r]=x;
                }
            }
            else{
                if(x>=maxx[r]){
                    maxx2[r]=maxx[r];
                    maxx[r]=x;
                }
                else{
                    maxx2[r]=max(maxx2[r],x);
                }
            }
        }
        int ans=-1;
        for(auto it:freq){
            if(it.second>1){
                int a=maxx[it.first];
                int b=maxx2[it.first];
                ans=max(ans,a+b);
            }
        }
        return ans;
    }
};
