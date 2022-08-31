class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        int num=1;
        while(true){
            bool f=true;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(matrix[i][j]==num){
                        num++;
                    }
                }
            }
            if(f){
                break;
            }
            num++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]!=0){
                    continue;
                }
                for(int k=0;k<m;k++){
                    if(matrix[i][k]!=0){
                        matrix[i][k]=num;
                    }

                }
                for(int k=0;k<n;k++){
                    if(matrix[k][j]!=0){
                        matrix[k][j]=num;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==num){
                    matrix[i][j]=0;
                }
            }
        }
    }
};
