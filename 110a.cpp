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

int a[105],b[105];
int main()
{
	string s;
	int i,cp=0;
	cin >> s;
	int sz=s.length();
	for (i = 0; i < sz; ++i)
	{
		if(s[i]=='4' || s[i]== '7')
		{
			cp++;
		}
	}
	//cout << cp << endl;
	string str=to_string(cp);
	for (i = 0; i < str.length(); ++i)
	{
		if(str[i]=='4' || str[i]== '7')
		{
			continue;
		}
		else
			break;
	}
	if(i==str.length())
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}