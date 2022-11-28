class Solution {
public:
    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {
        vector<int>vec;
        for(int i=0;i<wordsDict.size();i++){
            if(wordsDict[i]==word1){
                vec.push_back(i);
            }
        }
        int ans=wordsDict.size();
        for(int i=0;i<wordsDict.size();i++){
            if(wordsDict[i]==word2){
                int ind=lower_bound(vec.begin(),vec.end(),i)-vec.begin();
                if(ind<vec.size()){
                    ans=min(ans,abs(i-vec[ind]));
                }
                ind--;
                if(ind>=0){
                    ans=min(ans,abs(i-vec[ind]));
                }
            }
        }
        return ans;
    }
};
