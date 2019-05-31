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

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int a[100005];
void fibon()
{
	a[1]=1;
	for (int i = 2;a[i-1]<=10000005; ++i)
	{
		a[i] +=i+a[i-1];
		//cout << a[i] << endl;
	}
}
int main()
{
	fibon();
	int n;
	while(cin >> n)
	{
		for (int i = 0; i < 100005; ++i)
		{
			if(n>a[i] && n<=a[i+1])
			{
				if(i&1)
				{
					cout << "TERM " <<  n << " IS " <<  n-a[i]  << "/" << a[i+1]-n+1 << endl;
					break;
				}
				else
				{
					cout << "TERM " <<  n << " IS " << a[i+1]-n+1 <<  "/" << n-a[i] << endl;
					break;
				}
			}
		}
	}
}