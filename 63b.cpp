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

int a[105];
int given[105];
int main()
{
	int n,k,mn=105,cp=1,ck=0;
	cin >> n >> k;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int i=0;
	for (i = 0; a[0] !=k; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(a[j] !=a[j+1])
				a[j]++;
		}
		
	}
	cout << i << endl;



	



}