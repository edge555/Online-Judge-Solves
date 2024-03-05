class Solution {
public:
    vector<int>vec={1,1,2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,9,9,9};
    int countDivisibleSubstrings(string word) {
        int cnt=0;
        for(int i=0;i<word.size();i++){
            int st=0,en=i,len=en-st+1,sum=0;
            for(int j=st;j<=en;j++){
                sum+=vec[word[j]-'a'];
            }
            cnt+=sum%len==0;
            while(en<word.size()-1){
                sum-=vec[word[st++]-'a'];
                sum+=vec[word[++en]-'a'];
                cnt+=sum%len==0;
            }
        }
        return cnt;
    }
};
