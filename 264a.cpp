#include<bits/stdc++.h>
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

//string s;
int main()
{
	string s;
	cin >> s;
	int sz=s.length();
	for (int i = 0; i < sz; ++i)
	{
		if(s[i]=='r')
			cout << i+1 << "\n";
	}
	for (int i = sz-1; i >=0 ;i--)
	{
			if(s[i]=='l')
				cout << i+1 << "\n";
	}
}