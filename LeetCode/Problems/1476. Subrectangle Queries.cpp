class SubrectangleQueries {
public:
    int n,m;
    vector<vector<int>> grid;
    struct node{
        int r1,c1,r2,c2,val;
    };
    vector<node>vec;
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        n=rectangle.size();
        m=rectangle[0].size();
        grid=rectangle;
    }

    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        vec.push_back({row1, col1, row2, col2, newValue});
    }

    int getValue(int row, int col) {
        for(int i=vec.size()-1;i>=0;i--){
            auto v=vec[i];
            if(row>=v.r1 && row<=v.r2 && col>=v.c1 && col<=v.c2){
                return v.val;
            }
        }
        return grid[row][col];
    }
};
