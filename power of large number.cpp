#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long solve(long long b,long long p)
{
	if(p==0)
		return 1;
	if(p==1)
		return b%mod;
	if(p%2==0)
	{
		long long q=solve(b,p/2);
		return (q*q)%mod;
	}
	else
	{
		long long ql=solve(b,p/2);
		ql=(ql*ql)%mod;
		return (ql*b)%mod;
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{

		string s1,s2;
		cin >> s1 >> s2;
		int sz1=s1.length();
		int sz2=s2.length();
		long long base=0,power=0;
		for(int i=0;i<sz1;i++)
		{
			base=((base*10)+(s1[i]-'0'))%mod;
		}
		for (int i = 0; i <sz2; ++i)
		{
			power=((power*10)+(s2[i]-'0'))%(mod-1);
		}
		long long ans=solve(base,power);
		cout << ans << endl;

	}


}