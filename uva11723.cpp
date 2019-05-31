#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a,b;
	int s=1;
	while(cin >> a >> b && (a&&b))
	{
		a -=b;
		if(a<0)
			a=0;
		cout << "Case " << s++ << ": ";
		double ans=ceil(a/b);
		if(ans>26)
			{
				cout << "impossible" << endl;
				continue;
			}
		cout << ans << endl;




	}

















}