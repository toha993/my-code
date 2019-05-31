#include<bits/stdc++.h>
using namespace std;
map<int,int>fibo;
void init()
{
	long long a,b,c;
	a=0;
	b=1;
	while(1)
	{
		c=a+b;
		if(c>10000000000)
			break;
		fibo[c]=1;
		a=b;
		b=c;
	}

}
int main()
{
	int t;
	cin >> t;
	init();
	while(t--)
	{
		long long p;
		cin >>p;
		//assert(p <=10000000000LL);
		if(fibo[p])
			cout << "IsFibo" << endl;
		else
			cout << "IsNotFibo" << endl;
	} 



















}