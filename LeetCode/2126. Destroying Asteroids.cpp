class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long m=mass;
        for(auto x:asteroids){
            if(m<x){
                return false;
            }
            m+=x;
        }
        return true;
    }
};
