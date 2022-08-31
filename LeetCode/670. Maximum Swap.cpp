class Solution {
public:
    string intToStr(int n){
        string s="";
        while(n>0){
            int r=n%10;
            s+=r+'0';
            n/=10;
        }
        reverse(s.begin(),s.end());
        return s;
    }
    int func(string a,string b){
        int cnt=0;
        for(int i=0;i<a.size();i++){
            cnt+=a[i]!=b[i];
        }
        return cnt;
    }
    int maximumSwap(int num) {
        string a=intToStr(num);
        string b=a,ans=".";
        sort(b.begin(),b.end());
        do{
            if(b[0]!='0'){
                int swap=func(b,a);
                if(swap<=2){
                    if(ans=="."){
                        ans=b;
                    }
                    else{
                        ans=max(ans,b);
                    }
                }
            }
        }while(next_permutation(b.begin(),b.end()));
        int res=0;
        for(auto c:ans){
            res*=10;
            res+=c-'0';
        }
        return res;
    }
};
