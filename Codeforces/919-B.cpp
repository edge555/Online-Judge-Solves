#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k,ara[100000],sum;
    cin>>k;
    for(i=19,j=0;j<k;i=i+9)
        {
            for(n=i,sum=0;n!=0;n/=10)
                sum+=n%10;

            if(sum==10)
            {
                ara[j]=i;
                j++;
            }
        }

    cout<<ara[k-1];
}
