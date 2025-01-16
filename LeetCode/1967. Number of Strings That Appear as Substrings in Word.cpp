class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt=0;
        for(int i=0;i<patterns.size();i++)
        {
            cnt+=word.find(patterns[i])!=string::npos;
        }
        return cnt;
    }
};
