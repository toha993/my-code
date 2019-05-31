#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
	int t;
	cin >> t;
	for (int i = 1; i <= t; ++i)
	{
		int n;
		cin >> n ;
		for (int j = 1; j <= n; ++j)
		{
			cin >> a[j];

		}
		cout << "Case " << i << ": ";
		cout << a[(n+1)/2] << endl;
	}
















}