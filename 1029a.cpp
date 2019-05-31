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
//prina

int main()
{
	int n,m;
	cin >> n >> m;
	string s;
	cin >> s;
	int ans=0;
	for (int i = 1; i < s.length(); ++i)
	{
		if(s.substr(0,i)==s.substr(n-i,i))
		{
			ans=i;
		}
	}
	//cout << ans << endl;
	for (int i = 0; i < m-1; ++i)
	{
		s +=s.substr(ans,n-ans);
	}
	cout << s << endl;
}