class Solution {
public:
    int largestInteger(int num) {
        int ara[11];
        memset(ara,-1,sizeof(ara));
        vector<int>odd,even;
        int n=0,p=num;
        while(p>0){
            n++;
            p/=10;
        }
        int m=n;
        while(num>0){
            ara[--n]=num%2;
            if(num&1){
                odd.push_back(num%10);
            }
            else{
                even.push_back(num%10);
            }
            num/=10;
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        int ans=0;
        for(int i=0;i<m;i++){
            ans*=10;
            if(ara[i]&1){
                ans+=odd.back();
                odd.pop_back();
            }
            else{
                ans+=even.back();
                even.pop_back();
            }
        }
        return ans;
    }
};
