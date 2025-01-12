class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int>vec={0,1};
        int x=1;
        for(int i=1;i<n;i++){
            x<<=1;
            int l=vec.size()-1;
            while(l>=0){
                int p=vec[l]+x;
                vec.push_back(p);
                l--;
            }
        }
        return vec;
    }
};
