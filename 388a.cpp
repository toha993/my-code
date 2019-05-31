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


int main()
{
	int a;
	int s[105];
	cin >> a;
	for(int i=0;i<a;i++)
		cin >> s[i];
	sort(s,s+a);
	int p=a,ck,cp=0;
	while(p)
	{
		ck=0;
		for (int i = 0; i < a; ++i)
		{
			if(s[i]>=ck)
			{
				s[i]=-1;
				ck++;
				p--;
			}
		}
		cp++;
	}
	cout << cp << endl;
}