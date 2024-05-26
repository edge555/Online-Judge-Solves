class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int,int>ball;
        unordered_map<int,int>color;
        vector<int>ans;
        for(auto q:queries){
            int b=q[0],c=q[1];
            if(!ball.count(b)){
                ball[b]=c;
                color[c]++;
            }
            else{
                if(ball[b]!=c){
                    color[ball[b]]--;
                    if(color[ball[b]]==0){
                        color.erase(color.find(ball[b]));
                    }
                    ball[b]=c;
                    color[c]++;
                }
            }
            ans.push_back(color.size());
        }
        return ans;
    }
};
