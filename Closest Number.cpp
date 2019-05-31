#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long a,b,x;
		cin >> a >> b >> x;
		if(b<=0)
		{
			if(a != 1)
			cout << 0 << endl;
			else
				cout << 1 << endl; 
			continue;
		}
		long long ans=0,baki=0;
		ans=pow(a,b);
		if(ans<x)
		{
			if(x-ans > ans)
			cout << 0 << endl;
			else
				cout << x << endl;
			continue;
		}
		baki=ans/x;
		long long l,d;
		l=baki*x;
		d=(baki+1)*x;
		//cout << baki << endl;
		//ans -=baki;
		//cout << x*baki << endl;
		if(d-ans < ans-l)
			cout << d << endl;
		else
			cout << l << endl;









	}
























}