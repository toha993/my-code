#include<bits/stdc++.h>
using namespace std;
int a[100005];
long long desi(int d,int b)
{
	int ans=0;
	int p=1;
	while(d>0)
	{
		int dx=d%10;
		if(dx>=b)
			return -1;
		d /=10;
		ans =ans+dx*p;
		p =p*b;

	}
	return ans;

}

int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int t;
	cin >>  t;
	long long ck=0,hbe=0;
	while(t--)
	{
		int m,d;
		cin >> m >> d;
		if(m>12 || m<=0)
			continue;
		if(d>month[m] || d<=0)
			continue;
		long long l=desi(d,m);
		if(l !=-1)
		{
			hbe +=a[l];
			a[l]++;
		}

	}
	cout <<  hbe << endl;



















}