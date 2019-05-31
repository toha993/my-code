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

int a[200];
int main()
{
	int n;
	cin >> n;
	string s;
	for (int i = 0; i < n; ++i)
	{
		cin >> s;
		a[s[0]-48]++;
	}
	int ans=0;
	for (int i = 97-48; i <=97-48+26 ; ++i)
	{
		if(a[i]>1)
		{
			//cout << a[i] << endl;
			int m= a[i]/2;
			//cout <<m << endl;
			ans +=(m*(m-1))/2;
			//cout << ans << endl;
			m=a[i]-m;
			ans +=(m*(m-1))/2;
			//cout << ans << endl;
		}
	}
	cout << ans << endl;


}