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
int main(int argc, char const *argv[])
{
	int a,b,c;
	cin >> a >> b >> c;
	if(c%a==0 || c%b==0)
	{
		cout << "Yes" << endl;
		return 0;
	}
	for (int i = 1; i <=10000 ; ++i)
	{
		for (int j = 1; j <= 10000; ++j)
		{
			if(i*a+b*j==c)
			{
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	cout << "No" << endl;
	return 0;
}