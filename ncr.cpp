#include<bits/stdc++.h>
#define mod 1000000000
using namespace std;
int f[2005][2005];
void factorial()
{
	f[1][0]=1;
	f[1][1]=1;
	for(int i=2; i<=2000; i++)
	{
		f[i][0]=1;
		f[i][i]=1;
		for(int j=1;j<i;j++)
		{
			f[i][j]=(f[i-1][j-1]+f[i-1][j])%mod;
		}

		
	}
}
int main()
{
	int t;
	factorial();
	cin >> t;
	while(t--)
	{
		int p,q,ans;
		cin >> p;
		for(int i=p,j=0;j<=p;j++)
			cout << f[i][j] << " ";
		cout << endl;

	}
}