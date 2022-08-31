class Solution {
public:
    int maximum69Number (int num) {
        stack<int>st;
        while(num>0){
            st.push(num%10);
            num/=10;
        }
        bool f=false;
        int ans=0;
        while(!st.empty()){
            int r=st.top();
            if(r==6){
                if(!f){
                    r=9;
                    f=true;
                }
                ans*=10;
                ans+=r;
            }
            else{
                ans*=10;
                ans+=r;
            }
            st.pop();
        }
        return ans;
    }
};
