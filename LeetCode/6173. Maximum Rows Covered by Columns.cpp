class Solution {
public:
    int ans=0;
    void func(vector<vector<int>>& mat, int cols,vector<int>&vec,int &n,int &m){
        unordered_map<int,int>mp;
        for(int i=0;i<vec.size();i++){
            if(vec[i]==1){
                mp[i]++;
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            bool f=true;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    if(mp[j]==0){
                        f=false;
                        break;
                    }
                }
            }
            if(f){
                cnt++;
            }
        }
        ans=max(ans,cnt);
    }
    int maximumRows(vector<vector<int>>& mat, int cols) {
        int n=mat.size(),m=mat[0].size();
        vector<int>vec;
        for(int i=0;i<cols;i++){
            vec.push_back(1);
        }
        while(vec.size()!=m){
            vec.push_back(0);
        }
        sort(vec.begin(),vec.end());
        do{
            func(mat,cols,vec,n,m);
        }while(next_permutation(vec.begin(),vec.end()));
        return ans;
    }
};
