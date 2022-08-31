class Solution {
public:
    int getPower(int n){
        int cnt=0;
        while(n!=1){
            if(n&1){
                n=n*3+1;
            }
            else{
                n>>=1;
            }
            cnt++;
        }
        return cnt;
    }
    static bool comp(pair<int,int>a,pair<int,int>b){
        if(a.first==b.first){
            return a.second<b.second;
        }
        return a.first<b.first;
    }
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>>vec;
        for(int i=lo;i<=hi;i++){
            vec.push_back({getPower(i),i});
        }
        sort(vec.begin(),vec.end(),comp);
        return vec[k-1].second;
    }
};
