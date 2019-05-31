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

int a[1005];
vector<int>v;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	a[n]=0;
	for (int i = 0; i <n ; ++i)
	{
		if(a[i]>=a[i+1])
			v.push_back(a[i]);
	}
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); ++i)
	{

		if(i !=v.size())
		cout << v[i] << " ";
		else
			cout << v[i] << endl;
	}
}