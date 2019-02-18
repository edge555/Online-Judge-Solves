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
#define N 100005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
map<string,char>mp;
void gen()
{
    mp[".-"] = 'A'; mp["-..."] = 'B'; mp["-.-."] = 'C';
    mp["-.."] = 'D'; mp["."] = 'E'; mp["..-."] = 'F';
    mp["--."] = 'G'; mp["...."] = 'H'; mp[".."] = 'I';
    mp[".---"] = 'J'; mp["-.-"] = 'K'; mp[".-.."] = 'L';
    mp["--"] = 'M'; mp["-."] = 'N'; mp["---"] = 'O';
    mp[".--."] = 'P'; mp["--.-"] = 'Q'; mp[".-."] = 'R';
    mp["..."] = 'S'; mp["-"] = 'T'; mp["..-"] = 'U';
    mp["...-"] = 'V'; mp[".--"] = 'W'; mp["-..-"] = 'X';
    mp["-.--"] = 'Y'; mp["--.."] = 'Z';
    mp["-----"] = '0'; mp[".----"] = '1'; mp["..---"] = '2';
    mp["...--"] = '3'; mp["....-"] = '4'; mp["....."] = '5';
    mp["-...."] = '6'; mp["--..."] = '7'; mp["---.."] = '8';
    mp["----."] = '9';
    mp[".-.-.-"] = '.'; mp["--..--"] = ','; mp["..--.."] = '?';
    mp[".----."] = '\''; mp["-.-.--"] = '!'; mp["-..-."] = '/';
    mp["-.--."] = '('; mp["-.--.-"] = ')'; mp[".-..."] = '&';
    mp["---..."] = ':'; mp["-.-.-."] = ';'; mp["-...-"] = '=';
    mp[".-.-."] = '+'; mp["-....-"] = '-'; mp["..--.-"] = '_';
    mp[".-..-."] = '"'; mp[".--.-."] = '@';
}
int main()
{
    gen();
    int t,tc;
    sf(tc);
    getchar();
    rep(t,tc)
    {
        string a,b="";
        getline(cin,a);
        pf("Message #%d\n",t);
        int i;
        rep0(i,a.size())
        {
            if(a[i]==' ' || i==a.size()-1)
            {
                pf("%c",mp[b]);
                b.clear();
                if(a[i+1]==' ')
                {
                    pf(" ");
                    i++;
                }
            }
            else
                b+=a[i];
        }
        if(!b.empty())
            pf("%c",mp[b]);
        puts("");
        if(t!=tc)
            puts("");
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
