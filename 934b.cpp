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


int main()
{
	int n;
	cin >> n;
	if(n>36)
	{
		cout << -1 << endl;
	}
	else
	{
		if(n%2==0)
		{
			while(n!=0)
			{
				cout <<"8";
				n -=2;
			}
			cout << endl;
			return 0;
		}
		else
		{
			while(n!=1)
			{
				cout << "8";
				n -=2;
			}
			cout << "4" << endl;
			return 0;
		}
	}
}