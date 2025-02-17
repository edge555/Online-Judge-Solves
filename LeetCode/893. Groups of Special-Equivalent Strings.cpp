class Solution {
public:
    int numSpecialEquivGroups(vector<string>& words){
        int n=words.size();
        unordered_map<string,int>mp;
        for(auto word:words){
            vector<int>even(26,0),odd(26,0);
            for(int i=0; i<word.size();i++){
                if(i%2==0){
                    even[word[i]-'a']++;
                }
                else{
                    odd[word[i]-'a']++;
                }
            }
            string s="";
            for(int i=0;i<26;i++){
                s+=to_string(even[i]);
            }
            for(int i=0;i<26;i++){
                s+=to_string(odd[i]);
            }
            mp[s]++;
        }
        return mp.size();
    }
};
