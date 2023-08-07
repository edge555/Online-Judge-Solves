class Solution {
public:
    int maximumBeauty(vector<int>& flowers) {
        unordered_map<int,int>firstInd,lastInd;
        for(int i=0;i<flowers.size();i++){
            int x=flowers[i];
            if(!firstInd.count(x)){
                firstInd[x]=i;
            }
            else{
                lastInd[x]=i;
            }
        }
        vector<int>csum={};
        int sum=0;
        for(auto x:flowers){
            if(x>=0){
                sum+=x;
            }
            csum.push_back(sum);
        }
        int ans=-1e9;
        for(auto it:firstInd){
            int x=it.first;
            if(lastInd.count(x)){
                int p=csum[lastInd[x]-1]-csum[firstInd[x]];
                ans=max(ans,2*x+p);
            }
        }
        return ans;
    }
};
