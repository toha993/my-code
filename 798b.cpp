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
	string s[60];
	string p[60];
	for (int i = 0; i < n; ++i)
	{
		cin >> s[i];
		s[i] +=s[i];
		p[i]=s[i];
		sort(p[i].begin(),p[i].end());
	}
	int ans=0;
	for (int i = 0; i < n-1; ++i)
	{
		if(p[i] != p[i+1])
			ans=1;
	}
	if(ans)
	{
		cout <<-1 << endl;
		return 0;
	}
	int mn=1e9;
	int len=s[0].length();
	for (int i = 0; i <n ; ++i)
	{
		int xd=0;
		for (int j = 0; j < n; ++j)
		{
			int k=0;
			while(s[i].substr(0,len/2) != s[j].substr(k,len/2))
			{
				k++;
				if(k==(len/2))
				{
					ans=1;
					break;
				}
			}
			if(ans)
				break;
			xd +=k;
		}
		if(ans)
			break;
		mn=min(xd,mn);
	}
	if(!ans)
	cout << mn << endl;
	else
		cout << -1 << endl;
}