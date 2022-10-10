class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum=0;
        for(auto x:chalk){
            sum+=x;
        }
        k%=sum;
        int ans=0;
        for(int i=0;i<chalk.size();i++){
            k-=chalk[i];
            if(k<0){
                ans=i;
                break;
            }
        }
        return ans;
    }
};
