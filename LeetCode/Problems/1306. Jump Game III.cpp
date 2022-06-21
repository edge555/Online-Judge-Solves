class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        bool vis[arr.size()+1];
        memset(vis,false,sizeof(vis));
        queue<int>q;
        q.push(start);
        vis[start]=true;
        while(!q.empty()){
            int p=q.front();
            q.pop();
            if(arr[p]==0){
                return true;
            }
            int x=p+arr[p];
            int y=p-arr[p];
            if(x>=0 && x<arr.size()){
                if(!vis[x]){
                    vis[x]=true;
                    q.push(x);
                }
            }
            if(y>=0 && y<arr.size()){
                if(!vis[y]){
                    vis[y]=true;
                    q.push(y);
                }
            }
        }
        return false;
    }
};
