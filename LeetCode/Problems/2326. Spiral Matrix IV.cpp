class Solution {
public:
    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    bool valid(int x,int y,int n,int m){
        return x>=0 && x<n && y>=0 && y<m;
    }
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        swap(n,m);
        vector<vector<int>>vec(n,vector<int>(m,-1));
        int x=0,y=0,i=0;
        while(head!=NULL){
            if(valid(x,y,n,m)){
                if(vec[x][y]==-1){
                    vec[x][y]=head->val;
                    head=head->next;
                    x+=dx[i];
                    y+=dy[i];
                }
                else{
                    x-=dx[i];
                    y-=dy[i];
                    i++;
                    i%=4;
                    x+=dx[i];
                    y+=dy[i];
                }
            }
            else{
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
