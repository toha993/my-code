#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[100005];
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		/* code */
		int p,q;
		cin >> p >> q;
		for(int j=p;j<=q;j++)
			a[j]=i;
	}
	int q;
	cin >> q;
	cout << t-a[q] << endl;











}