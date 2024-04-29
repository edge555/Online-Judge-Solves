class Solution {
public:
    int dx[8]={1,1,0,-1,-1,-1,0,1};
    int dy[8]={0,1,1,1,0,-1,-1,-1};
    bool valid(int x,int y,int n,int m){
        return x>=0 && x<n && y>=0 && y<m;
    }
    bool isPrime(int n){
        if(n==2){
            return true;
        }
        if(n<=1 || n%2==0){
            return false;
        }
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int mostFrequentPrime(vector<vector<int>>& mat) {
        int r=mat.size(),c=mat[0].size();
        unordered_map<int,int>mp;
        int mx=-1;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                for(int k=0;k<8;k++){
                    int sx=i,sy=j;
                    int num=0;
                    while(valid(sx,sy,r,c)){
                        num*=10;
                        num+=mat[sx][sy];
                        if(isPrime(num) && num>9){
                            mp[num]++;
                            mx=max(mx,mp[num]);
                        }
                        sx+=dx[k];
                        sy+=dy[k];
                    }
                }
            }
        }
        int ans=-1;
        for(auto it:mp){
            if(it.second==mx){
                ans=max(ans,it.first);
            }
        }
        return ans;
    }
};
