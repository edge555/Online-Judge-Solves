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
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int tc,i=0,t=0;
    map<char,char>mp;
    char ch,ch2='2';
    for(ch='A';ch<='Z';ch++,i++)
    {
        if(ch=='Q' || ch=='Z')
        {
            i--;
            continue;
        }
        if(i==3)
        {
            i=0;
            ch2++;
        }
        mp[ch]=ch2;
    }
    sf(tc);
    getchar();
    while(tc--)
    {
        if(t>0)
            puts("");
        t++;
        int n,i;
        sf(n);
        getchar();
        map<string,int>mp2;
        while(n--)
        {
            string a,b="";
            cin>>a;
            rep0(i,a.size())
            {
                if(a[i]=='-')
                    continue;
                if(a[i]>='0' && a[i]<='9')
                    b.pb(a[i]);
                else
                    b.pb(mp[a[i]]);
            }
            mp2[b]++;
        }
        bool chk=true;
        for(auto it=mp2.begin();it!=mp2.end();it++)
        {
            if(it->se>1)
            {
                chk=false;
                string s=it->fi;
                rep0(i,s.size())
                {
                    if(i==3)
                        pf("-");
                    cout<<s[i];
                }
                pf(" %d\n",it->se);
            }
        }
        if(chk)
            pf("No duplicates.\n");
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
