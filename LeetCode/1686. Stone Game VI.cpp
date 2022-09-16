class Solution {
public:
    static bool comp(pair<int,int>&a,pair<int,int>&b){
        return a.first>b.first;
    }
    int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {
        vector<pair<int,int>>vec;
        for(int i=0;i<aliceValues.size();i++){
            vec.push_back({aliceValues[i]+bobValues[i],i});
        }
        sort(vec.begin(),vec.end(),comp);
        int sum=0,sum2=0;
        for(int i=0;i<vec.size();i++){
            if(i&1){
                sum2+=bobValues[vec[i].second];
            }
            else{
                sum+=aliceValues[vec[i].second];
            }
        }
        if(sum==sum2){
            return 0;
        }
        else if(sum>sum2){
            return 1;
        }
        return -1;
    }
};
