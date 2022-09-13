class Solution {
public:
    vector<int>grid[100005];
    int col[100005];
    bool mark[100005],vis[100005];
    vector<int>prime;
    void sieve(){
        int i,j;
        memset(mark,true,sizeof(mark));
        for(i=4;i<100005;i+=2){
            mark[i]=false;
        }
        for(i=3;i*i<100005;i++)
        {
            if(mark[i])
            {
                for(j=i*i;j<100005;j+=i*2){
                    mark[j]=false;
                }
            }
        }
        mark[1]=false;
        prime.push_back(2);
        for(i=3;i<100005;i+=2)
        {
            if(mark[i]){
                prime.push_back(i);
            }
        }
    }
    void primefact(int n){
        int i,m=n;
        for(i=0;prime[i]*prime[i]<=n;i++)
        {
            if(n%prime[i]==0)
            {
                while(n%prime[i]==0)
                    n/=prime[i];
                grid[m].push_back(prime[i]);
                grid[prime[i]].push_back(m);
            }
        }
        if(n>1)
        {
            grid[m].push_back(n);
            grid[n].push_back(m);
        }
    }
    void dfs(int u,int c){
        vis[u]=true;
        col[u]=c;
        for(auto v:grid[u]){
            if(!vis[v]){
                dfs(v,c);
            }
        }
    }
    bool gcdSort(vector<int>& nums) {
        sieve();
        for(int i=0;i<nums.size();i++){
            primefact(nums[i]);
        }
        int c=1;
        for(int i=0;i<prime.size();i++){
            if(!vis[prime[i]]){
                dfs(prime[i],c);
                c++;
            }
        }
        vector<int>q[c+1];
        for(auto x:nums){
            q[col[x]].push_back(x);
        }
        for(int i=1;i<c;i++){
            sort(q[i].rbegin(),q[i].rend());
        }
        vector<int>vec(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            int color=col[nums[i]];
            vec[i]=q[color].back();
            q[color].pop_back();
        }
        for(int i=1;i<nums.size();i++){
            if(vec[i-1]>vec[i]){
                return false;
            }
        }
        return true;
    }
};
