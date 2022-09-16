class Solution {
public:
    long long tot=0;
    vector<long long>vec;
    long long sum(long long a,long long b){
        long long x=(b*(b+1))>>1;
        a--;
        long long y=(a*(a+1))>>1;
        return x-y;
    }
    long long func(long long st,long long en){
        long long a=sum(st,en)+sum(st+1,en);
        a<<=1;
        return a;
    }
    long long level(long long r){
        long long st=r,en=r*2;
        long long a=func(st,en);
        long long b=func(st,en-1);
        return a+b;
    }
    void pre(){
        for(int i=1;;i++){
            tot+=level(i);
            vec.push_back(tot);
            if(tot>1e15){
                break;
            }
        }
    }
    long long minimumPerimeter(long long neededApples) {
        pre();
        long long lo=0,hi=vec.size()-1,ans=1e18;
        while(lo<=hi){
            long long mid=(lo+hi)>>1;
            if(vec[mid]>=neededApples){
                hi=mid-1;
                ans=min(ans,mid);
            }
            else{
                lo=mid+1;
            }
        }
        ans++;
        return 4*(ans+ans);
    }
};
