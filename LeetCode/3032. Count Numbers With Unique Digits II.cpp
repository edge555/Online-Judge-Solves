class Solution {
public:
    bool unique(int n){
        unordered_set<int>st;
        while(n>0){
            if(st.find(n%10)==st.end()){
                st.insert(n%10);
            }
            else{
                return false;
            }
            n/=10;
        }
        return true;
    }
    int numberCount(int a, int b) {
        int cnt=0;
        for(int i=a;i<=b;i++){
            cnt+=unique(i);
        }
        return cnt;
    }
};
