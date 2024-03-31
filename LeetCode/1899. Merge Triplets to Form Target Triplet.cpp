class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int mx1=-1,mx2=-1,mx3=-1;
        for(auto v:triplets){
            if(v[0]<=target[0] && v[1]<=target[1] && v[2]<=target[2]){
                mx1=max(mx1,v[0]);
                mx2=max(mx2,v[1]);
                mx3=max(mx3,v[2]);
            }
        }
        return mx1==target[0] && mx2==target[1] && mx3==target[2];
    }
};
