#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b;
	while(cin >> a >> b)
	{
		double s;
		cin >> s;
		double dif=(long double)a/b;
		long long d;
		for(d=1;;d++)
		{
			long long c=dif*d;
			while(a*d>=b*c)
				c++;
			long double v=(long double)c/(long double)d;
			if(v-dif<=s)
			{
				cout << c << " " << d << endl;
				break;
			}

		}

	}

}