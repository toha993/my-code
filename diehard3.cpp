#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d;
		cin >> a >> b >> c;
		if(a<b)
			swap(a,b);
		d=gcd(a,b);
		if(c<=a && c%d==0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}


























}