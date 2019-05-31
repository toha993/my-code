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
	string s,p;
	map<string,string>mp;
	//getchar();
	while(getline(cin,s))
	{
		//cout << s << endl;
		if(s.compare("")==0)
			break;
		stringstream ss(s);
		string p,q;
		ss>>p;
		ss >> q;
		mp[q]=p;
	}
	string xd;
	while(cin >> xd)
	{
		if(mp[xd] != "")
		cout << mp[xd] << endl;
		else
			cout << "eh" << endl;
	}
}