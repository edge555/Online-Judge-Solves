class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int> >ans;
        vector<int>vec={1};
        ans.push_back(vec);
        int i,j;
        for(i=1;i<rowIndex+1;i++)
        {
            vec.clear();
            vec={1};
            for(j=1;j<i;j++)
            {
                vec.push_back(ans[i-1][j-1]+ans[i-1][j]);
            }
            vec.push_back(1);
            ans.push_back(vec);
        }
        return ans[rowIndex];
    }
};
