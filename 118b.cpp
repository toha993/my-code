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
int ab[100005];
int main(int argc, char const *argv[])
{
	int p;
	cin >> p;
	for (int i = 0; i <=p ; ++i)
	{
		for(int j=(2*p-1)-i*2;j>=0;j--)
		{
			cout << " ";
		}
		for (int j=0;j<=i;j++)
		{
			if(j!=i)
			cout << j << " ";
			else
				cout << j;
		}
		for (int j=i-1;j>=0;j--)
		{
			cout << " " << j;
		}
		cout << endl;
	}
	for (int i = p-1; i >=0 ; i--)
	{
		for(int j=(2*p-1)-i*2;j>=0;j--)
		{
			cout << " ";
		}
		for (int j=0;j<=i;j++)
		{
			if(j!=i)
			cout << j << " ";
			else
				cout << j;
		}
		for (int j=i-1;j>=0;j--)
		{
			cout << " " << j;
		}
		cout << endl;
	}

}
