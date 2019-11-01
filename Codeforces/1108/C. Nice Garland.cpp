#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int main()
{
    int n,i,j,k;;
    string a,res;
    sf(n);
    cin>>a;
    int ans=INT_MAX,cnt;
    vector<string>vec={"RGB","RBG","GRB","GBR","BGR","BRG"};
    rep0(k,6)
    {
        i=0;
        cnt=0;
        string p=vec[k],c="";
        while(1)
        {
            if(i>=n)
                break;
            if(i+2>n-1)
            {
                int r=n%3;
                c+=p[0];
                if(a[i]!=p[0])
                    cnt++;
                if(r==2)
                {
                    c+=p[1];
                    if(a[i+1]!=p[1])
                        cnt++;
                }
                break;
            }
            if(a[i]!=p[0])
                cnt++;
            if(a[i+1]!=p[1])
                cnt++;
            if(a[i+2]!=p[2])
                cnt++;
            c+=p;
            i+=3;
        }
        if(cnt<ans)
        {
            ans=cnt;
            res=c;
        }
        c.clear();
    }
    pf("%d\n",ans);
    cout<<res;
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
