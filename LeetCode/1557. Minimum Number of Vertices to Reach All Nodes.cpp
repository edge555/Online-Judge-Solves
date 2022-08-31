class Solution {
public:
    int ara[100005];
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        for(auto v:edges){
            ara[v[1]]++;
        }
        vector<int>st;
        for(int i=0;i<n;i++){
            if(!ara[i]){
                st.push_back(i);
            }
        }
        return st;
    }
};
