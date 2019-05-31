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
bool tandem(string s)
{
	int len=s.length();
	int half=len/2;
	for (int i = 0; i < half; ++i)
	{
		if(s[half+i]!= '*')
		{
			if(s[half+i] !=s[i])
				return false;
		}
	}
	return true;
}
int main()
{



	string s;
	cin >> s;
	int p;
	cin >> p;
	for (int i = 0; i < p; ++i)
	{
		s +='*';
	}
	int xd=s.length();
	int t=xd/2;
	for(int i=t;i>=1;i--)
	{
		for (int j = 0; j <=xd-2*i ; ++j)
		{
			if(tandem(s.substr(j,2*i)))
			{
				cout << 2*i << endl;
				return 0;
			}
		}
	}

}