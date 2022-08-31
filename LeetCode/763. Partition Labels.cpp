class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]=i;
        }
        int i,mx=-1,cnt=0;
        vector<int>vec;
        for(int i=0;i<s.size();i++){
            if(mx==-1){
                cnt=1;
                mx=mp[s[i]];
                if(mx==i){
                    vec.push_back(cnt);
                    cnt=0;
                    mx=-1;
                }
            }
            else{
                if(i==mx){
                    vec.push_back(cnt+1);
                    cnt=0;
                    mx=-1;
                }
                else{
                    mx=max(mx,mp[s[i]]);
                    cnt++;
                }
            }
        }
        if(cnt){
            vec.push_back(cnt);
        }
        return vec;
    }
};
