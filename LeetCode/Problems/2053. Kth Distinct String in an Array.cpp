class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>mp;
        for(auto s:arr){
            mp[s]++;
        }
        vector<string>temp;
        for(auto s:arr){
            if(mp[s]==1){
                temp.push_back(s);
            }
        }
        if(k>temp.size()){
            return "";
        }
        return temp[k-1];
    }
};
