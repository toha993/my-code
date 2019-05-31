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
	int n;
	cin >> n;
	string s,p;
	cin >> s;
	int ck=0;
	for (int i = 0;i<n;)
	{
		if(s[i]==s[i+1] && (p.size()%2==0))
		{
			ck++;
			p +=s[i];
			int xd=i+2;
			while(s[i]==s[xd])
			{
				ck++;
				xd++;
				if(xd==n)
					break;
			}
			i=xd;
		}
		else
		{
			p +=s[i];
			i++;
		}
	//	cout << xd << endl;
		
	}
	//cout << p.size() << endl;
	if(p.size() & 1)
	{
		cout << n-p.size()+1 << endl;
		for (int i = 0; i < p.size()-1; ++i)
		{
			cout << p[i];
		}
		cout << endl;
		return 0;
	}
	cout << ck << endl;
	cout << p << endl;


}