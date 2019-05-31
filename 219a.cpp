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
map<int,int>mp;
int main()
{
	int a;
	cin >> a;
	string s;
	cin >> s;
	int sz=s.length();
	if(sz%a)
		{
			cout << -1 << endl;
			return 0;
		}
	int hbe=0;
	for (int i = 0; i < sz; ++i)
	{
		int b=s[i]-'0';
		mp[b]++;
		//cout << b << " " << mp[b] << endl;
	}
	string str;
	int ans;
	 for (int i = 49; i <= 74; ++i)
	 {
	 		if(mp[i]!=0)
	 		{
	 			ans=mp[i];
	 			if(ans < a)
	 			{
	 				cout << -1 << endl;
	 				return 0;
	 			}
	 		}
	 }
	 char pq;
	 int q=a;
	 while(a--)
	 {
	 	for (int i = 49; i <=74; ++i)
	 	{
	 		if(mp[i]!=0)
	 		{
	 		int l=mp[i]/q;
	 		pq= i+'0';
	 		for (int j=0; j<l;j++)
	 		{
	 			cout << pq;
	 		}

	 		}
		 }
	}
	 cout << endl;




}
