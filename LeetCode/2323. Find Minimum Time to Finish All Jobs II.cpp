class Solution {
public:
    int minimumTime(vector<int>& jobs, vector<int>& workers) {
        sort(jobs.begin(),jobs.end());
        sort(workers.begin(),workers.end());
        int mx=0;
        for(int i=0;i<jobs.size();i++){
            mx=max(mx,(jobs[i]/workers[i])+(jobs[i]%workers[i]!=0));
        }
        return mx;
    }
};
