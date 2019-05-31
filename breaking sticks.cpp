#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	long long ans=0;
	//long long a[105];
	for(int i=0;i<t;i++)
	{
		long long n;
		cin >> n;
		if(n>1)
		ans +=n;
			while(n>1)
			{
				bool paise=false;
				for (long long j = 2; j * j <=n; ++j)
				{
					if(n%j==0)
					{
						paise=true;
						n /=j;
						ans +=n;
						break;
					}
				}
				if(!paise)
				{
					break;
				}

			}
		ans +=1;
	}
	cout << ans <<  endl;

}