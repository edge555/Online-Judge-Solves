class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(),properties.end());
        int n=properties.size(),i=n-2;
        int mx=properties[n-1][1],tempmx=properties[n-1][1],cnt=0,last=properties[n-1][0];
        while(i>=0){
            if(properties[i][0]==last){
                tempmx=max(tempmx,properties[i][1]);
                i--;
            }
            else{
                break;
            }
        }
        for(;i>=0;i--){
            if(properties[i][0]!=properties[i+1][0]){
                mx=max(mx,tempmx);
                tempmx=properties[i][1];
            }
            else{
                tempmx=max(tempmx,properties[i][1]);

            }
            if(mx>properties[i][1]){
                cnt++;
            }
        }
        return cnt;
    }
};
