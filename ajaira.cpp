#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7, factorial[1000002], a, b, n, ans;
long long fastp(int b,int p)
{
	//cout << b << endl;
	if(p==0)return 1;
	long long ret = fastp(b,p/2)%mod;
	cout << ret << endl;
	ret = (ret * ret)%mod;
	if(p%2)ret = (ret * b) % mod;
	return ret;
}
long long fact()
{
	factorial[0] = 1;
	for(int i = 1; i<1000002; i++)
		factorial[i] = (i * factorial[i-1])%mod;
}
long long ncr(int n,int r)
{
	long long num = factorial[n];
	//cout << num << endl;
	long long dem = (factorial[n-r] * factorial[r])%mod;
	//cout << dem << endl;
	return (num * fastp(dem, mod-2))%mod;
}
bool check(long long n)
{
	while(n>0)
	{
		if(n%10 != a && n%10 != b)return 0;
		n = n / 10;
	}
	return 1;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	fact();
	cin>>a>>b>>n;
	for(int i=0;i<=n;i++)
	{
		if(check(i*a + (n - i)*b))
		{
			//cout << i << " " << n-i << endl;
			ans+= ncr(n,i);
			//cout << ncr(n,i) << endl;
			ans = ans % mod;
		}
	}
	cout<<ans;
  return 0;
}