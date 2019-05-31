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
	string s;
	cin >> s;
	string s1;
	int cp=0;
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i] != 'a')
			{
				cp=1;
				s1 +=s[i];
			}
	}
	if(s1.length()%2)
	{
		cout << ":(" << endl;
		return 0;
	}
		if(s[s.length()-1]=='a' && cp==1)
	{
		cout << ":(" << endl;
		return 0;
	}

	int xd=s1.length()/2;
	string p=s1.substr(0,xd);
	string q=s1.substr(xd,xd);
	int cn=0;
	if(p==q)
	{
		for (int i = 0; i < s.length()-xd; ++i)
		{
			if(s[i] !='a')
				cn++;
		}
	}
	if(cn ==xd){
		
	for (int i = 0; i < s.length()-xd; ++i)
		{
			cout << s[i];
		}
		cout << endl;
		return 0;}
	cout << ":(" << endl;
}