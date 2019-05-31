#include<bits/stdc++.h>
#define mod 1000000007
long long fact[2005][2005];
using namespace std;
void factorial()
{
	
	fact[1][1]=fact[1][0]=1;
	for(int i=2;i<=2000;i++)
	{
		fact[i][0]=fact[i][i]=1;
		for(int j=1;j<i;j++)
		{
			fact[i][j]=(fact[i-1][j-1]+fact[i-1][j])%mod;
		}
	}

}
int main()
{
	factorial();
	int t;
	cin >> t;
	while(t--)
	{
		int p,q;
		cin >> p >> q ;
		long long ans=0;
		ans=fact[p+q-1][p];
		cout << ans << endl;








	}




















}