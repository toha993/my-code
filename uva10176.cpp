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
int mod=131071;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main()
{
	string s;
	char x;
	while(cin >> x)
	{
		int s=0;
		s +=x-48;
		while(cin >> x)
		{
			if(x=='#')
				break;
			//s =s*2+(x-'0');
			cout <<s << endl;
			s %=mod;
		}
		if(s)
		{
			cout << "NO" << endl;
		}
		else
			cout << "YES" << endl;
	}
}