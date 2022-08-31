class Solution {
public:
    bool isValid(string &s){
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else{
                if(s[i]=='('){
                    st.push(s[i]);
                }
                else{
                    if(st.top()=='('){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        return st.empty();
    }
    vector<string> generateParenthesis(int n) {
        vector<string>vec;
        string s="";
        for(int i=0;i<n;i++){
            s+="(";
        }
        for(int i=0;i<n;i++){
            s+=")";
        }
        do{
            if(isValid(s)){
                vec.push_back(s);
            }
        }while(next_permutation(s.begin(),s.end()));
        return vec;
    }
};