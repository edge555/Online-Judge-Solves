class Solution {
public:
    bool isValid(string s) {
        if(s.size()<=2){
            return false;
        }
        stack<char>st;
        for(auto x:s){
            if(st.empty()){
                st.push(x);
            }
            else{
                if(x=='c'){
                    if(st.size()>=2){
                        char b=st.top();
                        st.pop();
                        char a=st.top();
                        st.pop();
                        if(b=='b' && a=='a'){
                            continue;
                        }
                        return false;
                    }
                    else{
                        return false;
                    }
                }
                else{
                    st.push(x);
                }
            }
        }
        return st.empty();
    }
};
