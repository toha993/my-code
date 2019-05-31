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


int main(int argc, char const *argv[])
{
	long long p,q,r,x;
	cin >> p >> q >> r >> x;
	int	mx=max(max(max(p,q),r),x);
	if(mx==x)
	cout << x-r << " " << x-q << " " <<  x-p  << endl;
	else if(mx==r)
	cout << r-x << " " << r-q << " " <<  r-p  << endl;
     else if(mx==p)
	cout << p-x << " " << p-q << " " <<  p-r  << endl;
     else if(mx==q)
	cout << q-x << " " << q-r << " " <<  q-p  << endl;
	return 0;
}