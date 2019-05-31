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
#define ll long long
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

ll a[100005];
int main()
{
	int n,c;
	cin >> n >> c;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	//a[n]=a[n-1];
	int ck=0;
	for (int i = 0; i < n; ++i)
	{
		if(a[i+1]-a[i]<=c)
			ck++;
		else
			ck=0;		
	}
	cout << ck << endl;
}