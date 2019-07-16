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
bool comp(string &a,string &b)
{
    int i,mn=min(a.size(),b.size());
    rep0(i,mn)
    {
        char ch=tolower(a[i]),ch2=tolower(b[i]);
        if(ch==ch2)
        {
            if(a[i]==b[i])
                continue;
            return a[i]<b[i];
        }
        else
            return ch<ch2;
    }
    return a.size()<b.size();
}
int main()
{
    FAST;
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        int i,j,n;
        string a;
        cin>>n;
        unordered_map<char,int>mp;
        vector<string>vec;
        rep0(i,n)
        {
            cin>>a;
            vec.pb(a);
            mp[tolower(a[0])]++;
        }
        sort(all(vec),comp);
        int as=0,ae=mp['a']-1;
        int bs=ae+1,be=bs+mp['b']-1;
        int cs=be+1,ce=cs+mp['c']-1;
        int ds=ce+1,de=ds+mp['d']-1;
        int q;
        cin>>q;
        cin.ignore();
        while(q--)
        {
            getline(cin,a);
            char ch=a[0];
            if(ch=='A')
            {
                if(as<=ae)
                    cout<<vec[as++]<<endl;
                else
                    cout<<"Already Mastered"<<endl;
            }
            else if(ch=='B')
            {
                if(bs<=be)
                    cout<<vec[bs++]<<endl;
                else
                    cout<<"Already Mastered"<<endl;
            }
            else if(ch=='C')
            {
                if(cs<=ce)
                    cout<<vec[cs++]<<endl;
                else
                    cout<<"Already Mastered"<<endl;
            }
            else
            {
                if(ds<=de)
                    cout<<vec[ds++]<<endl;
                else
                    cout<<"Already Mastered"<<endl;
            }
        }

    }
}
