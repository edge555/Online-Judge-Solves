class Solution {
public:
    long long sum(long long l,long long r){
        long long a=(r*(r+1))>>1;
        l--;
        long long b=(l*(l+1))>>1;
        return a-b;
    }
    long long minimalKSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int last=0;
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            if(k>0){
                if(nums[i]==last){
                    continue;
                }
                if(nums[i]!=last+1){
                    long long l=last+1,r=nums[i]-1;
                    int len=r-l+1;
                    if(len<=k){
                        long long p=sum(l,r);
                        ans+=p;
                        k-=len;
                    }
                    else{
                        r=l+k-1;
                        long long p=sum(l,r);
                        ans+=p;
                        k=0;
                    }
                }
            }
            last=nums[i];
        }
        if(k>0){
            long long l=last+1,r=l+k-1;
            ans+=sum(l,r);
        }
        return ans;
    }
};
