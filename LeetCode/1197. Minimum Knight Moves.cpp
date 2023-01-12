class Solution {
public:
    int dx[8]={2,1,-1,-2,-2,-1,1,2};
    int dy[8]={1,2,2,1,-1,-2,-2,-1};
    bool vis[2000][2000];
    int cost[2000][2000];
    bool valid(int x,int y){
        return x>=0 && x<2000 && y>=0 && y<2000;
    }
    int minKnightMoves(int x, int y) {
        if(x==0 && y==0){
            return 0;
        }
        x+=400;
        y+=400;
        queue<pair<int,int>>q;
        q.push({400,400});
        vis[400][400]=true;
        cost[400][400]=0;
        while(!q.empty()){
            pair<int,int>pp=q.front();
            q.pop();
            int px=pp.first,py=pp.second;
            for(int i=0;i<8;i++){
                int xx=px+dx[i];
                int yy=py+dy[i];
                if(xx==x && yy==y){
                    return cost[px][py]+1;
                }
                if(valid(xx,yy)){
                    if(!vis[xx][yy]){
                        vis[xx][yy]=true;
                        cost[xx][yy]=cost[px][py]+1;
                        q.push({xx,yy});
                    }
                }
            }
        }
        return -1;
    }
};
