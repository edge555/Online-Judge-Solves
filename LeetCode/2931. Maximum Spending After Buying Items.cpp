class Solution {
public:
    long long maxSpending(vector<vector<int>>& values) {
        vector<stack<int>>vec;
        for(auto v:values){
            stack<int>st;
            for(auto x:v){
                st.push(x);
            }
            vec.push_back(st);
        }
        int n=values.size(),m=values[0].size();
        long long ans=0;
        for(long long d=1;d<=n*m;d++){
            int ind=-1;
            long long mn=1e9;
            for(int i=0;i<n;i++){
                if(vec[i].empty()){
                    continue;
                }
                if(mn>vec[i].top()){
                    mn=vec[i].top();
                    ind=i;
                }
            }
            ans+=d*mn;
            vec[ind].pop();
        }
        return ans;
    }
};
