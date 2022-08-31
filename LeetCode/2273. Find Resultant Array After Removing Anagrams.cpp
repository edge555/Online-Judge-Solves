class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>temp,ans;
        for(auto s:words){
            sort(s.begin(),s.end());
            temp.push_back(s);
        }
        ans.push_back(words[0]);
        for(int i=1;i<words.size();i++){
            if(temp[i]!=temp[i-1]){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};
