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

int ab[200005];
int main()
{
	int n,b,a;
	cin >> n >> b >> a;
	int mx=a;
	int btry=b;
	for (int i = 1; i <= n; ++i)
	{
		cin >> ab[i];
	}
	long long ck=0;
	mx--;
	ck++;
	for (int i = 2; i <=n; ++i)
	{
		if(mx==0 && btry==0)
			break;
		else if(mx==0)
		{
			btry--;
			if(ab[i]==1)
				mx++;
		}
		else if(btry==0)
		{
			mx--;
		}
		else if(mx<a && ab[i]==1)
		{
			btry--;
			mx++;
		}
		else
			mx--;
		ck++;
	}
	cout << ck << endl;

}