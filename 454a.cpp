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
	int a;
	cin >> a;
	int ck=0;
	for (int i = 0; i <(a+1)/2 ; i++)
	{
		for (int j = 0; j<a; ++j)
		{
			if(j>=((a)/2)-ck && j<=((a)/2)+ck )
				cout << "D";
			else
				cout << "*";
		}
		ck++;
		cout << endl;
	}
	ck=a-((a+1)/2)-1;
	for (int i = 0; i <a-((a+1)/2) ; i++)
	{
		for (int j = 0; j<a; ++j)
		{
			if(j>=((a)/2)-ck && j<=((a)/2)+ck )
				cout << "D";
			else
				cout << "*";
		}
		ck--;
		cout << endl;
	}
}