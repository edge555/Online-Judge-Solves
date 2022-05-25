class Solution {
public:
    string removeDigit(string number, char digit) {
        vector<string>vec;
        string s="";
        for(int i=0;i<number.size();i++){
            if(number[i]==digit){
                string t=s+number.substr(i+1,number.size()-i-1);
                vec.push_back(t);
            }
            s+=number[i];
        }
        sort(vec.begin(),vec.end());
        return vec[vec.size()-1];
    }
};
