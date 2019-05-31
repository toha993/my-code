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
string s[5]={"aeiou","eioua","iouae","ouaei","uaeio"};
int main()
{
	int n;
	cin >> n;
	if(sqrt(n)>=5)
	{
		for (int i =5;; ++i)
		{
			if(n/i < 5)
				break;
			if(n%i !=0)
				 continue;
			int q=n/i;
			//cout << q << endl;
			for (int j = 0; j < i ; ++j)
			{
				cout << s[j%5];
				for (int k = 0; k < q-5 ; ++k)
				{
					cout << s[j%5][k%5];
				}
			}
			return 0;
		}
		cout << -1 << endl;
	}
	else
	{
		cout << -1 << endl;
	}
}