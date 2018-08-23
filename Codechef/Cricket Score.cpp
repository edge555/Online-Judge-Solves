#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int pr=0,pw=0,i=1;
    while(i<=n)
    {
        int run,wkt;
        cin>>run>>wkt;
        if(run<pr || wkt<pw || (wkt==10 && i<n))
        {
            cout<<"NO"<<endl;
            return 0;
        }
        pr=run;
        pw=wkt;
        i++;
    }
    cout<<"YES"<<endl;
	return 0;
}
