class Solution {
public:
    int func(string &s){
        int cnt=1;
        for(auto c:s){
            if(c==' '){
                cnt++;
            }
        }
        return cnt;
    }
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<string,int>mp;
        for(int i=0;i<messages.size();i++){
            mp[senders[i]]+=func(messages[i]);
        }
        int mx=-1;
        string name="";
        for(auto it:mp){
            if(it.second>=mx){
                mx=it.second;
                name=it.first;
            }
        }
        return name;
    }
};
