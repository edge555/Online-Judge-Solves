class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            int x=arr[i];
            for(int j=i+1;j<arr.size();j++){
                x^=arr[j];
                if(!x){
                    cnt+=(j-i);
                }
            }
        }
        return cnt;
    }
};
