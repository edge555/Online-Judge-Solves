class Solution {
public:
    long long minimumHealth(vector<int>& damage, int armor) {
        int mx=-1,ind=-1;
        for(int i=0;i<damage.size();i++){
            if(damage[i]>mx){
                mx=damage[i];
                ind=i;
            }
        }
        damage[ind]-=armor;
        damage[ind]=max(damage[ind],0);
        long long ans=1;
        for(auto x:damage){
            ans+=x;
        }
        return ans;
    }
};
