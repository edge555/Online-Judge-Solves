#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<string,int>
#define autto(mp) for(auto it=mp.begin();it!=mp.end();it++)
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int n,tc=0;
    while(cin>>n)
    {
        if(tc>0)
            puts("");
        tc++;
        string a;
        vector<string>vec;
        map<string,int>mp;
        map<string,int>::iterator it;
        vector<pi>vec2;
        int i;
        rep0(i,n)
        {
            cin>>a;
            vec.pb(a);
        }
        rep0(i,n)
        {
            int k,j,t,m;
            cin>>a>>t;
            sf(m);
            if(m==0)
            {
                vec2.pb(mpp(a,0));
                continue;
            }
            int rem=t%m;
            vec2.pb(mpp(a,rem-t));
            k=t/m;
            rep0(j,m)
            {
                cin>>a;
                mp[a]+=k;
            }
        }
        sort(all(vec2));
        for(i=0,it=mp.begin();it!=mp.end();it++,i++)
        {
            int x=it->se+vec2[i].se;
            mp[it->fi]=x;
        }
        rep0(i,vec.size())
            cout<<vec[i]<<" "<<mp[vec[i]]<<endl;

    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
