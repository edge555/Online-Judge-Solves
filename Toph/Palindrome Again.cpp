#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3)
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3)
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
unordered_map<string,int>mp,mp2;
void gen()
{
    mp["zero"]=0;
    mp["one"]=1;
    mp["two"]=2;
    mp["three"]=3;
    mp["four"]=4;
    mp["five"]=5;
    mp["six"]=6;
    mp["seven"]=7;
    mp["eight"]=8;
    mp["nine"]=9;
    mp["ten"]=10;
    mp["eleven"]=11;
    mp["twelve"]=12;
    mp["thirteen"]=13;
    mp["fourteen"]=14;
    mp["fifteen"]=15;
    mp["sixteen"]=16;
    mp["seventeen"]=17;
    mp["eighteen"]=18;
    mp["nineteen"]=19;
    mp["twenty"]=20;
    mp["thirty"]=30;
    mp["forty"]=40;
    mp["fifty"]=50;
    mp["sixty"]=60;
    mp["seventy"]=70;
    mp["eighty"]=80;
    mp["ninety"]=90;
    mp2["twenty"]=2;
    mp2["thirty"]=3;
    mp2["forty"]=4;
    mp2["fifty"]=5;
    mp2["sixty"]=6;
    mp2["seventy"]=7;
    mp2["eighty"]=8;
    mp2["ninety"]=9;
}
bool pali(string s)
{
    if(s==string(s.rbegin(),s.rend()))
        return true;
    return false;
}
int countdot(string s)
{
    int i,cnt=0;
     rep0(i,s.size())
    {
        if(s[i]=='.')
            cnt++;
    }
    return cnt;
}
int main()
{
    FAST;
    gen();
    int t,tc;
    cin>>tc;
    cin.ignore();
    rep(t,tc)
    {
        string a,b,c="";
        getline(cin,a);
        stringstream ss(a);
        int i,j,x=0;
        while(ss>>b)
        {
            if(b=="thousand" || b=="hundred")
            {
                c.pop_back();
                int p=mp[c];
                if(b[0]=='h')
                    x+=p*100;
                else
                    x+=p*1000;
                c.clear();
            }
            else
                c+=b+'.';
        }
        int cnt=countdot(c);
        if(cnt==1)
        {
            c.pop_back();
            x+=mp[c];
        }
        else if(cnt==2)
        {
            string s1,s2;
            rep0(i,c.size())
            {
                if(c[i]=='.')
                    break;
                s1+=c[i];
            }
            for(j=i+1;j<c.size()-1;j++)
                s2+=c[j];
            x+=mp2[s1]*10+mp[s2];
        }
        string bins=bitset<64>(x).to_string();
        string bin="";
        bool flag=false;
        rep0(i,bins.size())
        {
            if(bins[i]=='1')
                flag=true;
            if(flag)
                bin+=bins[i];
        }
        if(pali(bin))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
