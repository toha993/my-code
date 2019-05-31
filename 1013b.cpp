#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100005];
int main()
{
	int n,k,ans=100;
	cin >> n >> k;
	//memset(b.0,sizeof(b));
	for(int i=0;i<n;i++)
	{
		int p;
		cin >> p;
		a[p]++;
		if(p !=(p&k))
			b[(p&k)]++;
	}
	//cout << b[3] << endl;
	for(int i=0;i<100000;i++)
	{
		if(a[i]>=2) 
		{
			ans=min(ans,0);
		}
		if(a[i]>=1 && b[i]>=1)
		{
			ans=min(ans,1);
		}
		if(b[i]>=2)
		{
			ans=min(ans,2);
		}

	}
	if(ans>2)
		cout << -1 <<endl;
	else
		cout << ans << endl;

























}