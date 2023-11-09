class Solution {
public:
    int matrixMedian(vector<vector<int>>& grid) {
        unordered_map<int,int>mp;
        int n=grid.size(),m=grid[0].size();
        for(auto v:grid){
            for(auto x:v){
                mp[x]++;
            }
        }
        int med=((n*m)>>1)+1,prevNumberCount=0;
        for(int i=1;i<=1e6;i++){
            if(!mp.count(i)){
                continue;
            }
            if(prevNumberCount+mp[i]>=med){
                return i;
            }
            prevNumberCount+=mp[i];
        }
        return -1;
    }
};
