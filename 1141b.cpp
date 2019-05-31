#include<bits/stdc++.h>
using namespace std;
int a[200005],b[200005];
int main()
{
	int p,ck=0,ans=0,ttl=0,last;
	cin >>p;
	for (int i = 0; i < p; ++i)
	{
		cin >> a[i];
		//cout << a[i];
		if(a[i] == 1 )
		{
			//ans=i;
			ck++;
		}
		else
		{
			//cout << ck << endl;
			ttl=max(ttl,ck);
			ck=0;
		}
	}
	//cout << ttl << " " << ck << endl;
	if(a[p-1]==1)
	{
		int i=0;
		while(a[i]!=0)
			{
				ck++;
				i++;
			}
	}
	ans=max(ttl,ck);
	cout << ans << endl;

}