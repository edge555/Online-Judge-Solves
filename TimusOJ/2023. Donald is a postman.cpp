#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define MOD 1000000007
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    map<string,int>mp;
    map<string,int>::iterator it;
    mp["Alice"]=1;
    mp["Ariel"]=1;
    mp["Aurora"]=1;
    mp["Phil"]=1;
    mp["Peter"]=1;
    mp["Olaf"]=1;
    mp["Phoebus"]=1;
    mp["Ralph"]=1;
    mp["Robin"]=1;

    mp["Bambi"]=2;
    mp["Belle"]=2;
    mp["Bolt"]=2;
    mp["Mulan"]=2;
    mp["Mowgli"]=2;
    mp["Mickey"]=2;
    mp["Silver"]=2;
    mp["Simba"]=2;
    mp["Stitch"]=2;

    mp["Dumbo"]=3;
    mp["Genie"]=3;
    mp["Jiminy"]=3;
    mp["Kuzko"]=3;
    mp["Kida"]=3;
    mp["Kenai"]=3;
    mp["Tarzan"]=3;
    mp["Tiana"]=3;
    mp["Winnie"]=3;

    int t,pos=1,cnt=0;
    sf(t);
    while(t--)
    {
        string a;
        cin>>a;
        cnt+=abs(pos-mp[a]);
        pos=mp[a];
    }
    pf("%d\n",cnt);
}
