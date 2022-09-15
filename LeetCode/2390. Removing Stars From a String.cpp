class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(auto c:s){
            if(st.empty()){
                st.push(c);
            }
            else{
                if(c=='*'){
                    if(st.top()!='*'){
                        st.pop();
                    }
                    else{
                        st.push(c);
                    }
                }
                else{
                    st.push(c);
                }
            }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
