class Solution {
public:
    bool isNum(string s){
        for(auto c:s){
            if(c<'0' || c>'9'){
                return false;
            }
        }
        return true;
    }
    int convNum(string s){
        int r=0;
        for(auto c:s){
            r*=10;
            r+=(c-'0');
        }
        return r;
    }
    bool areNumbersAscending(string s) {
        stringstream ss(s);
        vector<int>vec;
        string t;
        while(ss>>t){
            if(isNum(t)){
                vec.push_back(convNum(t));
            }
        }
        for(int i=1;i<vec.size();i++){
            if(vec[i]<=vec[i-1]){
                return false;
            }
        }
        return true;
    }
};
