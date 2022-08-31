class Solution {
public:
    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    bool valid(int x,int y,int n,int m){
        return x>=0 && x<n && y>=0 && y<m;
    }
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>vec(n,vector<int>(n,-1));
        int x=0,y=0,i=0,cnt=n*n,p=1;
        while(cnt>0){
            bool f=true;
            if(valid(x,y,n,n)){
                if(vec[x][y]==-1){
                    vec[x][y]=p++;
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
        return vec;
    }
};
