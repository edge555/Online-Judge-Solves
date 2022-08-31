class Solution {
public:
    int wordCount(vector<string>& startWords, vector<string>& targetWords) {
        set<vector<int>>st;
        for(auto s:startWords){
            vector<int>freq(26,0);
            for(auto c:s){
                freq[c-'a']++;
            }
            st.insert(freq);
        }
        int cnt=0;
        for(auto s:targetWords){
            vector<int>freq(26,0);
            for(auto c:s){
                freq[c-'a']++;
            }
            for(int i=0;i<26;i++){
                if(freq[i]){
                    int r=freq[i];
                    freq[i]=0;
                    if(st.find(freq)!=st.end()){
                        cnt++;
                        break;
                    }
                    else{
                        freq[i]=r;
                    }
                }
            }
        }
        return cnt;
    }
};
