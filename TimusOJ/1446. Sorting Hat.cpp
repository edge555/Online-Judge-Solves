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
    mp["Slytherin"]=0;
    mp["Hufflepuff"]=1;
    mp["Gryffindor"]=2;
    mp["Ravenclaw"]=3;
    vector<string>vec[5];
    int n,i;
    string a,b;
    sf(n);
    getchar();
    for (i=0;i<n;i++)
    {
        getline(cin,a);
        getline(cin,b);
        vec[mp[b]].pb(a);
    }
    for(i=0;i<4;i++)
    {
        if(i==0)
            puts("Slytherin:");
        else if(i==1)
            puts("Hufflepuff:");
        else if(i==2)
            puts("Gryffindor:");
        else
            puts("Ravenclaw:");
        for (int j=0;j<vec[i].size();j++)
            cout<<vec[i][j]<<endl;
        if(i!=3)
            pf("\n");
    }
}