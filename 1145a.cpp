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

int a[105],p[105];
bool sorted(int x,int y)
{
	for (int i = x+1; i < y; ++i)
	{
		if(a[i] < a[i-1])
			return false;
	}
	return true;
}
int main()
{
	int n,ck=0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	ck=n;
	while(ck>1)
	{
		for (int i = 0; i < n; i +=ck)
		{
			if(sorted(i,i+ck))
			{
				cout << ck << endl;
				return 0;
			}
		}
		ck /=2;
	}
	cout << 1 << endl;

}