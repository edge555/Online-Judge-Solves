class Solution {
public:
    vector<vector<int>>ans;
    void func(vector<int>&vec,int n){
        vector<int>temp;
        int sum=0;
        for(int i=0;i<vec.size();i++){
            if(vec[i]==1){
                sum+=i+1;
                temp.push_back(i+1);
            }
        }
        if(sum==n){
            ans.push_back(temp);
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>vec;
        for(int i=0;i<9;i++){
            if(i<9-k){
                vec.push_back(0);
            }
            else{
                vec.push_back(1);
            }
        }
        do{
            func(vec,n);
        }
        while(next_permutation(vec.begin(),vec.end()));
        return ans;
    }
};
