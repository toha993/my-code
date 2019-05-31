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

char a[100000];
int main()
{
	int p,q,ck=0;
	cin >> p;
	for (int i = 0; i < p; ++i)
	{
		cin >> a[i];
		q=a[i]-'0';
		if(q%2==0)
		{
			ck++;
			ck += i-0;
		}
	}
	cout << ck << endl;
}