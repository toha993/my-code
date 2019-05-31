#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
	int n;
	cin >> n;
	int ck=0,cn=0,ans=1;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		if(a[i]==25)
			ck++;
		if(a[i]==50)
		{
			ck--;
			cn++;
		}
		if(a[i]==100)
		{
			if (cn)
			{
				cn--;
				ck--;
			}
			else
				ck -=3;
		}
		if(ck < 0 || cn < 0)
			ans=0;
	}
	if(ans)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}