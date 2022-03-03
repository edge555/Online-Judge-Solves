class Solution {
int ara[100005];
public:
    bool possible(string &s,string &p,vector<int>&vec,int mid){
        string t="";
        int j=0,k=0;
        memset(ara,0,sizeof(ara));
        for(int i=0;i<mid;i++){
            ara[vec[i]]=1;
        }
        for(int i=0;i<s.size();i++){
            if(j==p.size()){
                break;
            }
            if(ara[i]){
                continue;
            }
            if(s[i]==p[j]){
                j++;
            }
        }
        return j==p.size();

    }
    int maximumRemovals(string s, string p, vector<int>& removable) {
        int lo=0,hi=removable.size(),ans=-1;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(possible(s,p,removable,mid)){
                lo=mid+1;
                ans=max(ans,mid);
            }
            else{
                hi=mid-1;
            }
        }
        return ans;
    }
};
