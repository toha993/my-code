#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void power(long long f[2][2],int n,int a,int b);
long long fibo(int n,int a,int b)
{
	long long f[2][2]={{1,1},{1,0}};
	//cout << f[0][0] << " " << f[0][1] << " " << f[1][0] << " " << f[1][1] << endl;
	if(n==0)
		return 0;
	power(f,n-1,a,b);
	return ((f[0][0] * b) % mod + (f[0][1] * a ) % mod) % mod;
	return f[0][0];
}
void multiply(long long f[2][2],long long m[2][2])
{
	long long x=((f[0][0]%mod)*(m[0][0]%mod))%mod+((f[0][1]%mod)*(m[1][0]%mod))%mod;
	long long y=((f[0][0]%mod)*(m[0][1]%mod))%mod+((f[0][1]%mod)*(m[1][1]%mod))%mod;
	long long z=((f[1][0]%mod)*(m[0][0]%mod))%mod+((f[1][1]%mod)*(m[1][0]%mod))%mod;
	long long w=((f[1][0]%mod)*(m[0][1]%mod))%mod+((f[1][1]%mod)*(m[1][1]%mod))%mod;
	f[0][0]=x;
	f[0][1]=y;
	f[1][0]=z;
	f[1][1]=w;
	//cout << x << " " <<  y << " " <<  z <<" " <<  w << endl;
}
void power(long long f[2][2],int n,int a,int b)
{
	if(n==0 || n==1)
		return;
	long long m[2][2]={{1,1},{1,0}};
	power(f,n/2,a,b);
	multiply(f,f);
	if(n%2 !=0)
		multiply(f,m);
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{

		int p,q,r;
		cin >> p >> q >> r;
		if(r==0){

			cout << p <<endl;
		}
		else if(r==1)
		{
			cout << q<< endl;
		}
		else{

		long long s=fibo(r,p,q);
		cout << s << endl;
	}
	}




























}