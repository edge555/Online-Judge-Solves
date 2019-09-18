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
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int main()
{
    ll i,n,k;
    vector<ll>vec,vec2;
    cin>>n;
    rep0(i,n)
    {
        cin>>k;
        vec2.pb(k);
        vec.pb(k);
    }
    sort(all(vec));
    unordered_map<ll,ll>mp;
    rep0(i,n-1)
        mp[vec[i+1]-vec[i]]++;
    if(mp.size()>3)
    {
        cout<<-1;
        return 0;
    }
    if(mp.size()==1)
    {
        int mx=-1,ind;
        rep0(i,n)
        {
            if(vec2[i]>mx)
            {
                mx=vec2[i];
                ind=i+1;
            }
        }
        cout<<ind;
        return 0;
    }
    ll mx=-1,x,y;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        bool miss=false;
        ll now=it->first;
        vector<ll>temp,tempp;
        rep0(i,n-1)
        {
            if(vec[i+1]-vec[i]==now)
            {
                temp.pb(vec[i]);
                tempp.pb(vec[i]);
            }
            else
            {
                miss=true;
                x=vec[i];
                y=vec[i+1];
                temp.pb(vec[i]);
                tempp.pb(vec[i+1]);
                i+=2;
                while(i<n)
                {
                    temp.pb(vec[i]);
                    tempp.pb(vec[i]);
                    i++;
                }
                break;
            }
        }
        if(!miss)
        {
            cout<<1;
            return 0;
        }
        ll cur=temp[1]-temp[0];
        bool possible=true;
        for(i=1;i<temp.size();i++)
        {
            if(temp[i]-temp[i-1]!=cur)
            {
                possible=false;
                break;
            }
        }
        if(possible)
        {
            for(i=0;i<n;i++)
            {
                if(vec2[i]==y)
                {
                    cout<<i+1;
                    return 0;
                }
            }
        }
        cur=tempp[1]-tempp[0];
        possible=true;
        for(i=1;i<tempp.size();i++)
        {
            if(tempp[i]-tempp[i-1]!=cur)
            {
                possible=false;
                break;
            }
        }
        if(possible)
        {
            for(i=0;i<n;i++)
            {
                if(vec2[i]==x)
                {
                    cout<<i+1;
                    return 0;
                }
            }
        }
    }
    cout<<-1;
}
