#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
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
#define mem(goal,n) memset(goal,n,sizeof(goal))
#define memb(goal) memset(goal,false,sizeof(goal))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<int,int>
#define pii pair<int,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
bool comp(pii a,pii b)
{
    pi x=a.se,y=b.se;
    if(x.fi==y.fi)
    {
        return x.se>y.se;
    }
    return x.fi>y.fi;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,x,y,ind=1;
        int point[5],goal[5];
        mem(point,0);
        mem(goal,0);
        unordered_map<string,int>mp;
        unordered_map<int,string>mp2;
        char a[100],b[100],c[100];
        rep0(i,12)
        {
            scanf("%s %d %s %d %s",&a,&x,&b,&y,&c);
            if(mp[a])
            {
                goal[mp[a]]+=x;
                goal[mp[a]]-=y;
            }
            else
            {
                mp[a]=ind;
                mp2[ind]=a;
                ind++;
                goal[mp[a]]+=x;
                goal[mp[a]]-=y;
            }
            if(mp[c])
            {
                goal[mp[c]]+=y;
                goal[mp[c]]-=x;
            }
            else
            {
                mp[c]=ind;
                mp2[ind]=c;
                ind++;
                goal[mp[c]]+=y;
                goal[mp[c]]-=x;
            }
            if(x>y)
                point[mp[a]]+=3;
            else if(x<y)
                point[mp[c]]+=3;
            else
            {
                point[mp[a]]++;
                point[mp[c]]++;
            }
        }
        vector<pii>vec;
        rep(i,4)
            vec.pb({i,{point[i],goal[i]}});
        sort(all(vec),comp);
        int p=vec[0].fi,q=vec[1].fi;
        cout<<mp2[p]<<" "<<mp2[q]<<endl;
    }
}
