#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b)
{
	if(b==0)
		return a;
	else 
		return gcd(b,a%b);
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		long long p=abs(a-c);
		long long q=abs(b-d);
		if(p<q)
			swap(p,q);
		long long ans=gcd(p,q);
		cout << ans-1 << endl;














	}
























































}