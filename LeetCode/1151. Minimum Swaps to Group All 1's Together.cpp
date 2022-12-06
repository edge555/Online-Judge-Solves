class Solution {
public:
    int minSwaps(vector<int>& data) {
        int cnt=0;
        for(auto x:data){
            cnt+=x;
        }
        int st=0,en=cnt-1;
        int sum=0;
        for(int i=0;i<=en;i++){
            sum+=data[i];
        }
        int ans=cnt-sum;
        while(en<data.size()-1){
            sum-=data[st++];
            sum+=data[++en];
            ans=min(ans,cnt-sum);
        }
        return ans;
    }
};
