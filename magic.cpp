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
#define ll long long
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main()
{
	string s;
	cin >> s;
	stringstream ss(s);
	long long x=0;
	ss >> x;
	long long ck=0;
	while(x!=0)
	{
		sort(s.begin(),s.end());
		//int p= s[s.size()-1]+48;
		ll xd=stoi(s);
		int p =xd%10;
		x -=p;
		s=to_string(x);
		ck++;
	}
	cout << ck << endl;

}