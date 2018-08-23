#include<bits/stdc++.h>
using namespace std;

int A[2005][2005];
int hist(int hist[],int k)
{
	stack<int>s;

	int top,maxa=0,ta=0,i=0;
	while (i<k)
	{
		if (s.empty() || hist[s.top()]<=hist[i])
			s.push(i++);

		else
		{
			top=hist[s.top()];
			s.pop();
			ta=top*i;

			if (!s.empty())
				ta=top*(i-s.top()-1);
			maxa = max(ta,maxa);
		}
	}
	while (!s.empty())
	{
		top=hist[s.top()];
		s.pop();
		ta=top*i;
		if (!s.empty())
			ta=top*(i-s.top()-1);

		maxa = max(ta, maxa);
	}
	return maxa;
}

int maxRectangle(int R,int C)
{
    int i,j;
	int res = hist(A[0],C);
	for (i=1;i<R;i++)
	{
		for (j=0;j<C;j++){
		if (A[i][j])
                	A[i][j]+= A[i-1][j];

		res=max(res,hist(A[i],C));
		}
	}
	return res;
}
int main()
{
    int n,k;
    cin>>n;
    for (k=1;k<=n;k++)
    {
	int r,c,i,j,t;
	string a="";
	cin>>r>>c;
	getchar();
	for (i=0;i<r;i++)
    	{
      	 getline(cin,a);
        for (j=0;j<a.size();j++)
        {
            t=a[j]-'0';
            A[i][j]=(t==0)?1:0;
        }
    	}
	cout<<"Case "<<k<<": "<<maxRectangle(r,c)<<endl;
    }
	return 0;
}
