#include<bits/stdc++.h>
int a[300005];
//long long total[300005];
using namespace std;
int main()
{
	int t;
	cin >> t;
	long long total=0;
	for(int i=0;i<t;i++)
	{
		cin >> a[i];
		total +=a[i];
	}
	//cout << total << endl;
	sort(a,a+t);
	int m;
	cin >> m;
	while(m--)
	{
		int q;
		cin >> q;
		cout << total-a[t-q] << endl;
	}


}