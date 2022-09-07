class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int>left(n,0),right(n,0);
        int cnt=0,sum=0;
        for(int i=0;i<n;i++){
            left[i]=sum;
            cnt+=boxes[i]=='1';
            sum+=cnt;
        }
        cnt=0;
        sum=0;
        for(int i=n-1;i>=0;i--){
            right[i]=sum;
            cnt+=boxes[i]=='1';
            sum+=cnt;
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(left[i]+right[i]);
        }
        return ans;
    }
};
