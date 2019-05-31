#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b)
{
 if(b==0) return a;
	return gcd(b,a%b);
}
int main()
{
	long long a,s[100005],suru[100005],ssh[100005];
	cin >> a;
	for(int i=1;i<=a;i++)
		cin >> s[i];
	if(a==1)
		{
			cout << s[1]+1 << endl;
			return 0;
		}
	suru[0]=ssh[a+1]=0;
	for(int i=1;i<=a;i++)
		suru[i]=gcd(suru[i-1],s[i]);
	for(int i=a;i>=1;i--)
		ssh[i]=gcd(ssh[i+1],s[i]);
	for(int i=1;i<=a;i++)
	{
		long long p=gcd(suru[i-1],ssh[i+1]);
		if(s[i]%p)
		{
			cout << p << endl;
			break;
		}



	}

}