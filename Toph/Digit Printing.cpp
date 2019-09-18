#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(n) scanf("%d",&n)
#define sff(n,m) scanf("%d %d",&n,&m)
#define sfff(n,m,k) scanf("%d %d %d",&n,&m,&k)
#define sl(n) scanf("%lld",&n)
#define sll(n,m) scanf("%lld %lld",&n,&m)
#define slll(n,m,k) scanf("%lld %lld %lld",&n,&m,&k)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,b) for(i=a;i<=b;i++)
#define pb push_back
#define fi first
#define se second
#define N 100005
#define ll long long int
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<"::"<<x<<endl;
#define dbb(x,y) cout<<#x<<"::"<<x<<'/t'<<#y<<"::"<<y<<endl;
using namespace std;
string a[12];
int t,tc;
void setval()
{
    a[0]="**** ** ** ****";
    a[1]=" *  *  *  *  * ";
    a[2]="***  *****  ***";
    a[3]="***  ****  ****";
    a[4]="* ** ****  *  *";
    a[5]="****  ***  ****";
    a[6]="****  **** ****";
    a[7]="***  *  *  *  *";
    a[8]="**** ***** ****";
    a[9]="**** ****  *  *";
}
void print(ll n)
{
    if(n)
    {
        int dig=0;
        ll m=n;
        vector<int>vec;
        while(m)
        {
            dig++;
            vec.pb(m%10);
            m/=10;
        }
        reverse(all(vec));
        string b[6];
        int i,j=0,k,l;
        rep0(i,5)
        {
            for(l=0;l<dig;l++)
            {
                int now=vec[l];
                for(k=i*3;k<(i*3)+3;k++)
                    cout<<a[now][k];
                if(l!=dig-1)
                    cout<<" ";
            }
            cout<<endl;
        }
    }
    else
       cout<<"***"<<endl<<"* *"<<endl<<"* *"<<endl<<"* *"<<endl<<"***"<<endl;
    if(t!=tc)
        cout<<endl;
}
int main()
{
    setval();
    cin>>tc;
    rep(t,tc)
    {
        ll a,b;
        char ch;
        cin>>a>>ch>>b;
        if(ch=='+')
            a+=b;
        else if(ch=='-')
            a-=b;
        else if(ch=='*')
            a*=b;
        cout<<"Case #"<<t<<":"<<endl;
        print(abs(a));

    }
}
