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
	int n,d,a[100005];
	cin >> n;
	cin >>a[0];
	int ck=1,ans=0;
	for (int i = 1; i < n; ++i)
	{
		cin >>a[i];
		if(a[i]>a[i-1])
			ck++;
		else
		{
			ans=max(ans,ck);
			ck=1;
		}
	}
	cout  << max(ans,ck) << endl;
	return 0;
}