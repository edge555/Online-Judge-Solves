class Solution {
public:
    int getNum(string &s){
        int num=0;
        for(auto c:s){
            num*=10;
            num+=c-'0';
        }
        return num;
    }
    int getTime(string &s){
        string h="";
        h+=s[0];
        h+=s[1];
        string m="";
        m+=s[3];
        m+=s[4];
        int tot=getNum(h)*60+getNum(m);
        return tot;
    }
    int findMinDifference(vector<string>& timePoints) {
        vector<int>vec;
        for(auto v:timePoints){
            int t=getTime(v);
            vec.push_back(t);
        }
        sort(vec.begin(),vec.end());
        int mn=INT_MAX;
        for(int i=0;i<vec.size()-1;i++){
            mn=min(mn,vec[i+1]-vec[i]);
        }
        mn=min(mn,(vec[0]+1440-vec[vec.size()-1])%1440);
        return mn;
    }
};
