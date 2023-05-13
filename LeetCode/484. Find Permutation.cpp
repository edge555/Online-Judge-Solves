class Solution {
public:
    vector<int> findPermutation(string s) {
        vector<int>vec;
        for(int i=1;i<=s.size()+1;i++){
            vec.push_back(i);
        }
        int l=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='I'){
                continue;
            }
            int j=i,l=i;
            while(j<s.size() && s[j]=='D'){
                j++;
            }
            reverse(vec.begin()+l,vec.begin()+j+1);
            i=j;
        }
        return vec;
    }
};
