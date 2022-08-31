class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string>st;
        for(auto s:wordList){
            st.insert(s);
        }
        queue<pair<string,int>>q;
        q.push({beginWord,1});
        while(!q.empty()){
            pair<string,int>p=q.front();
            q.pop();
            if(p.first==endWord){
                return p.second;
            }
            st.erase(p.first);
            string s=p.first;
            for(int i=0;i<s.size();i++){
                char c=s[i];
                for(char ch='a';ch<='z';ch++){
                    s[i]=ch;
                    if(st.find(s)!=st.end()){
                        q.push({s,p.second+1});
                    }
                }
                s[i]=c;
            }
        }
        return 0;
    }
};
