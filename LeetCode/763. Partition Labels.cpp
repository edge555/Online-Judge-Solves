class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>lastind;
        for(int i=0;i<s.size();i++){
            lastind[s[i]]=i;
        }
        vector<int>vec;
        int cnt=1,curlast=lastind[s[0]];
        for(int i=1;i<s.size();i++){
            if(i<=curlast){
                cnt++;
                curlast=max(curlast,lastind[s[i]]);
            }
            else{
                vec.push_back(cnt);
                cnt=1;
                curlast=lastind[s[i]];
            }
        }
        if(cnt){
            vec.push_back(cnt);
        }
        return vec;
    }
};