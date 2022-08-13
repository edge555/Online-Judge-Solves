class Solution {
public:
    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    bool valid(int x,int y,int n,int m){
        return x>=0 && x<n && y>=0 && y<m;
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        vector<vector<int>>vec(n,vector<int>(m,-1));
        int x=0,y=0,i=0,cnt=n*m;
        vector<int>ans;
        while(cnt>0){
            bool f=true;
            if(valid(x,y,n,m)){
                if(vec[x][y]==-1){
                    vec[x][y]=matrix[x][y];
                    ans.push_back(matrix[x][y]);
                    x+=dx[i];
                    y+=dy[i];
                    cnt--;
                }
                else{
                    f=false;
                }
            }
            else{
                f=false;
            }
            if(!f){
                x-=dx[i];
                y-=dy[i];
                i++;
                i%=4;
                x+=dx[i];
                y+=dy[i];
            }
        }
        return ans;
    }
};
