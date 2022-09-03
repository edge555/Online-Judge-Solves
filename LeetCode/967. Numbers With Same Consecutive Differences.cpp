class Solution {
public:
    vector<int>ans;
    unordered_set<int>st;
    void func(int cur,int dig,int &n,int &k){
        if(dig==n){
            if(st.find(cur)==st.end()){
                ans.push_back(cur);
                st.insert(cur);
            }

            return;
        }
        int r=cur%10;
        int a=r-k,b=r+k;
        if(a>=0 && a<=9){
            func(cur*10+a,dig+1,n,k);
        }
        if(b>=0 && b<=9){
            func(cur*10+b,dig+1,n,k);
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        for(int i=1;i<=9;i++){
            func(i,1,n,k);
        }
        return ans;
    }
};
