class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        set<int>st;
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            st.insert(arr[i]);
            if(*st.rbegin()==i){
                cnt++;
            }
        }
        return cnt;
    }
};
