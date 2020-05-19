#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(n) scanf("%d",&n)
#define sff(n1,n2) scanf("%d %d",&n1,&n2)
#define sfff(n1,n2,n3) scanf("%d %d %d",&n1,&n2,&n3)
#define sl(n) scanf("%lld",&n)
#define sll(n1,n2) scanf("%lld %lld",&n1,&n2)
#define slll(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define nl puts("");
#define pb push_back
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
int main()
{
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        string a,b,c,d;
        cin>>a>>b;
        map<string,bool>vis,vis2;
        map<string,string>mp,mp2;
        map<string,string>::iterator it,it2;
        int i,f=0;
        vector<string>vec,vec2,vec3,tot;
        set<string>st;
        for(i=1;i<=a.size()-2;i++)
        {
            c.clear();
            while(a[i]!=':')
            {
                c+=a[i];
                i++;
            }
            tot.pb(c);
            vis[c]=true;
            d.clear();
            i++;
            while(a[i]!=',' && a[i]!='}')
            {
                d+=a[i];
                i++;
            }
            mp[c]=d;
        }
        for(i=1;i<=b.size()-2;i++)
        {
            c.clear();
            while(b[i]!=':')
            {
                c+=b[i];
                i++;
            }
            if(!vis[c])
                tot.pb(c);
            vis2[c]=true;
            d.clear();
            i++;
            while(b[i]!=',' && b[i]!='}')
            {
                d+=b[i];
                i++;
            }
            mp2[c]=d;
        }
        for(i=0;i<tot.size();i++)
        {
            a=tot[i];
            if(vis2[a] && !vis[a])
                vec.pb(a);
            else if(vis[a] && !vis2[a])
                vec2.pb(a);
            else if(mp[a]!=mp2[a])
                vec3.pb(a);
        }
        if(vec.empty() && vec2.empty() && vec3.empty())
        {
            cout<<"No changes"<<endl<<endl;
            continue;
        }
        sort(all(vec));
        sort(all(vec2));
        sort(all(vec3));
        if(vec.size())
        {
            cout<<"+";
            rep0(i,vec.size())
            {
                cout<<vec[i];
                if(i<vec.size()-1)
                    cout<<",";
            }
            cout<<endl;
        }
        if(vec2.size())
        {
            cout<<"-";
            rep0(i,vec2.size())
            {
                cout<<vec2[i];
                if(i<vec2.size()-1)
                    cout<<",";
            }
            cout<<endl;
        }
        if(vec3.size())
        {
            cout<<"*";
            rep0(i,vec3.size())
            {
                cout<<vec3[i];
                if(i<vec3.size()-1)
                    cout<<",";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}