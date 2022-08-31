class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        vector<vector<int>>vec;
        for(auto v:triplets){
            if(v[0]<=target[0] && v[1]<=target[1] && v[2]<=target[2]){
                vec.push_back(v);
            }
        }
        sort(vec.begin(),vec.end());
        vector<int>temp={-1,-1,-1};
        for(auto v:vec){
            temp[0]=max(temp[0],v[0]);
            temp[1]=max(temp[1],v[1]);
            temp[2]=max(temp[2],v[2]);
            if(temp==target){
                return true;
            }
        }
        return false;
    }
};
