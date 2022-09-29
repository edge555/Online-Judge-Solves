class Solution {
public:
    bool inside(int x,int y,int r,int a,int b){
        int xx=abs(x-a),yy=abs(y-b);
        return xx*xx+yy*yy<=r*r;
    }
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>vec;
        for(auto v:queries){
            int x=v[0],y=v[1],r=v[2],cnt=0;
            for(auto p:points){
                int a=p[0],b=p[1];
                cnt+=inside(x,y,r,a,b);
            }
            vec.push_back(cnt);
        }
        return vec;
    }
};
