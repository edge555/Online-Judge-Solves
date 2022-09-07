class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int st=0,en=k-1;
        double sum=0.0;
        for(int i=0;i<=en;i++){
            sum+=arr[i]*1.0;
        }
        int cnt=0;
        double avg=sum/k;
        if(avg>=threshold){
            cnt++;
        }
        while(en<arr.size()-1){
            sum-=arr[st++];
            sum+=arr[++en];
            avg=sum/k;
            if(avg>=threshold){
                cnt++;
            }
        }
        return cnt;
    }
};
