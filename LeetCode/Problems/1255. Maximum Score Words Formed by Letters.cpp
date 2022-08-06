class Solution {
public:
    vector<int>ans;
    bool check(unordered_map<char,int>&freq,unordered_map<char,int>&mp){
        for(char ch='a';ch<='z';ch++){
            if(freq[ch]<mp[ch]){
                return false;
            }
        }
        return true;
    }
    void backtrack(int i,int sum,vector<string>& words, unordered_map<char,int>&freq, vector<int>& score,unordered_map<char,int>&mp){
        if(i==words.size()){
            if(check(freq,mp)){
                ans.push_back(sum);
            }
            return;
        }
        backtrack(i+1,sum,words,freq,score,mp);
        int temp=0;
        unordered_map<char,int>tmp=mp;
        for(auto c:words[i]){
            tmp[c]++;
            temp+=score[c-'a'];
        }
        backtrack(i+1,sum+temp,words,freq,score,tmp);
    }
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        unordered_map<char,int>freq,mp;
        for(auto c:letters){
            freq[c]++;
        }
        backtrack(0,0,words,freq,score,mp);
        sort(ans.begin(),ans.end());
        return ans[ans.size()-1];
    }
};
