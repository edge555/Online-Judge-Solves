class Solution {
public:
     struct node{
        long long dis;
        int x,y;
        node(){

        }
        node(long long _dis,int _x,int _y){
            dis=_dis;
            x=_x;
            y=_y;
        }
    };
    static bool comp(node &a, node &b){
        return a.dis<b.dis;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<node>vec;
        for(auto v:points){
            long long d=(v[0]*v[0])+(v[1]*v[1]);
            vec.push_back({d,v[0],v[1]});
        }
        sort(vec.begin(),vec.end(),comp);
        vector<vector<int> >ans;
        for(int i=0;i<k;i++){
            vector<int>temp={vec[i].x,vec[i].y};
            ans.push_back(temp);
        }
        return ans;
    }
};
