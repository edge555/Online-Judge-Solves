class Solution {
public:
    int findLonelyPixel(vector<vector<char>>& picture) {
        int n=picture.size(),m=picture[0].size();
        unordered_map<int,int>row,col;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(picture[i][j]=='B'){
                    row[i]++;
                    col[j]++;
                }
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(picture[i][j]=='B'){
                    if(row[i]==1 && col[j]==1){
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};
