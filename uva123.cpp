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
//unfinished

int main()
{
	string s;
	map<string,int>mp;
	set<string>st;
	while(cin >> s)
	{
		if(s[0]==':')
			break;
		st.insert(s);
	}
	//getline(cin,s);
	while(cin >> s)
	{
		stringstream ss(s);
		string xd;
		vector<string>v;

	}
}