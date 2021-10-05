class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(auto c:s){
            if(st.empty()){
                st.push(c);
            }
            else{
                if(st.top()==c){
                    st.pop();
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
