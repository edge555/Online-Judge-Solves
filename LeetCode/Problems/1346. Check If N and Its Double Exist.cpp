class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int one=0;
        map<int,int>mp;
        for(auto x:arr){
            mp[x]++;
        }
        for(auto x:arr){
            if(x==0){
                if(mp[0]>=2){
                    return true;
                }
            }
            else{
                if(mp[2*x]>0){
                    return true;
                }
            }
        }
        return false;
    }
};
