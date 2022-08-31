class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<long long>vec;
        int cnt=0;
        for(int i=0;i<rocks.size();i++){
            long long r=capacity[i]-rocks[i];
            if(r){
                vec.push_back(r);
            }
            else{
                cnt++;
            }
        }
        sort(vec.begin(),vec.end());
        long long sum=0;
        for(int i=0;i<vec.size();i++){
            sum+=vec[i];
            if(sum>additionalRocks){
                break;
            }
            cnt++;
        }
        return cnt;
    }
};
