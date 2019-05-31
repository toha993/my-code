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


int main()// 
// 
// 
// 
{
	string s;
	cin >> s;
	stringstream ss(s);
	int x=0;
	ss >> x;
	if(x<8 && x!=0)
	{
		cout << "NO" << endl;
		return 0;
 	}

	if(x%8==0)
	{
		cout << "YES" << endl;
		cout << x << endl;
		return 0;
	}
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='0')
	{
		cout << "YES" << endl;
		cout << 0 << endl;
		return 0;
	}
	if(s[i]=='8')
	{
		cout << "YES" << endl;
		cout << 8 << endl;
		return 0;
	}
	}
	for (int i = 0; i < s.size()-2; ++i)
	{
		for (int j = i+1; j < s.size()-1; ++j)
		{
			for (int k = j+1; k < s.size(); ++k)
			{
				if(((s[i]+'0')*100+(s[j]+'0')*10+(s[k]+'0')*1)%8==0)
				{
					cout << "YES" << endl;
					cout <<s[i] << s[j] << s[k] << endl;
					return 0;
				}
			}
		}
	}
	for (int j =0; j < s.size(); ++j)
		{
			for (int k = j+1; k < s.size(); ++k)
			{
				if(((s[j]+'0')*10+(s[k]+'0')*1)%8==0)
				{
					cout << "YES" << endl;
					cout <<s[j] << s[k] << endl;
					return 0;
				}
			}
		}
	cout << "NO" << endl;

}