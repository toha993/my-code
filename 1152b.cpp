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
//solution
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int main()
{

	int a[50];
	int n;
	cin >> n;
	int j=19;
	int ck=0;
	int i=0;
	while(j--)
	{
		int x=log2(n)+1;

		n =n^(int)(pow(2,x)-1);
		n++;
		a[i++]=x;
	}
	cout << "39\n";
	for (int l = 0; l < i ; ++l)
	{
		cout << a[l] << " ";
	}
	cout << log2(n)+1;
	//n=n^(int)(pow(2,log2(n)+1)-1);
	int x=log2(n)+1;

	cout << (int)(pow(2,x)-1) << endl;

}