class Solution {
public:
    vector<int>slidemax(vector<int>arr, int k)
    {
        deque<int> q(k);
        int N=arr.size();
        int i;
        for(i=0;i<k;i++){
            while((!q.empty()) && arr[i]>=arr[q.back()])
                q.pop_back();
            q.push_back(i);
        }
        vector<int>temp;
        for(;i<N;i++){
            temp.push_back(arr[q.front()]);
            while((!q.empty()) && q.front()<=i-k)
                q.pop_front();
            while ((!q.empty()) && arr[i]>=arr[q.back()])
                q.pop_back();
            q.push_back(i);
        }
        temp.push_back(arr[q.front()]);
        return temp;
    }
    bool possible(vector<int>& charge, vector<int>& runcost, long long budget,int mid,int &n){
        vector<int>smax=slidemax(charge,mid);
        long long sum=0;
        int st=0,en=mid-1;
        for(int i=0;i<=en;i++){
            sum+=runcost[i];
        }
        int mx=smax[0];
        long long cost=mx+mid*sum;
        if(cost<=budget){
            return true;
        }
        while(en<n-1){
            sum-=runcost[st];
            st++;
            mx=smax[st];
            en++;
            sum+=runcost[en];
            cost=mx+mid*sum;
            if(cost<=budget){
                return true;
            }
        }
        return false;
    }
    int maximumRobots(vector<int>& chargeTimes, vector<int>& runningCosts, long long budget) {
        int n=chargeTimes.size();
        int lo=1,hi=n,ans=0;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(possible(chargeTimes,runningCosts,budget,mid,n)){
                ans=max(ans,mid);
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return ans;
    }
};
