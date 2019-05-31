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
	vector<int>v;
	string a,b;
	cin >> a >> b;
	for (int i = 0; i < a.length(); ++i)
	{
		if(a[i]=='0' && b[i]== '1')
		{
			v.push_back(1);
		}
		else if(a[i]=='1' && b[i]== '0')
		{
			v.push_back(1);
		}
		else
			v.push_back(0);
	}
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i];
	}
	cout << endl;


	return 0;
}