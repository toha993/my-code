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
	int n;
	cin >> n;
	while(n--)
	{
		string s,p;
		cin >> s >> p;
		reverse(s.begin(),s.end());
		reverse(p.begin(),p.end());
		int x=0,d=0;
		stringstream ss(s );
		ss >> x;
		stringstream sd(p);
		sd >> d;
		int ttl= x + d;
		string xd;
		xd=to_string(ttl);
		reverse(xd.begin(),xd.end());
		stringstream sx(xd);
		x=0;
		sx >> x;
		xd=to_string(x);
		cout << xd << endl;


	}







}