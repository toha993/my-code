#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include <iomanip>

using namespace std;
bool isprime[1000005];
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void sieve()
{
	int mx=1000000;
	//bool isprime[1000005];
	memset(isprime,0,sizeof(isprime));
	isprime[1]=isprime[0]=1;
	for (int i = 4; i <= mx; i +=2)
	{
		isprime[i]=1;
	}
	for (int i = 3; i <= sqrt(mx); i+=2)
	{
		if(isprime[i]==0)
		{
			for (int j = 2*i; j <= mx; j +=i)
			{
				isprime[j]=1;
			}

		}
	}
	// for (int i = 0; i < 100; ++i)
	// {
	// 	if(isprime[i]==0)
	// 		cout << i << endl;
	// }
}

int main()
{
	int n;
	sieve();
	while(cin >> n)
	for (int i = 2; i < n/2+1; ++i)
	{
		if(isprime[i]==0 && isprime[n-i]==0)
			{
				//cout << isprime[i] << "  " << isprime[n-i] << endl;
				cout << n << " = " << i << " + " << n-i  << endl;
				break;
			}
	}
}