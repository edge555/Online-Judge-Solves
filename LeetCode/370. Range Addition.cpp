class Solution {
public:
    vector<int> getModifiedArray(int length, vector<vector<int>>& updates) {
        vector<int>vec(length+1,0);
        for(auto v:updates){
            vec[v[0]]+=v[2];
            vec[v[1]+1]-=v[2];
        }
        for(int i=1;i<length+1;i++){
            vec[i]+=vec[i-1];
        }
        vec.pop_back();
        return vec;
    }
};
