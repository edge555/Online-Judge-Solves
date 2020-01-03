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
class Mana {
public:
    string manachar(string s)
    {
        string T;
        for(int i=0;i<s.size();i++)
            T+="#"+s.substr(i,1);
        T.push_back('#');
        vector<int>P(T.size(),0);
        int center=0,boundary=0,maxLen=0,resCenter=0;
        for(int i=1;i<T.size()-1;i++)
        {
            int iMirror=2*center-i;
            P[i]=(boundary>i)?min(boundary-i,P[iMirror]):0;
            while(i-1-P[i]>=0 && i+1+P[i]<=T.size()-1 && T[i+1+P[i]]==T[i-1-P[i]])
                P[i]++;
            if(i+P[i]>boundary)
            {
                center=i;
                boundary=i+P[i];
            }
            if(P[i]>maxLen)
            {
                maxLen = P[i];
                resCenter = i;
            }
        }
        return s.substr((resCenter-maxLen)/2,maxLen);
    }
};
int main()
{
    Mana mana;
    int i,n;
    string a;
    cin>>n>>a;
    a=mana.manachar(a);
    cout<<sz(a)<<endl<<a;

}
