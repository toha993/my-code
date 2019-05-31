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

int a[100005];
int main()
{	
	string s;
	int n;
	cin >> n;
	cin >> s;
	int ck=0,cp=0;
	for (int i = 0; i < n; ++i)
	{
		a[s[i]-48]++;
		if(a[s[i]-48] >1)
		{
			ck++;
		}
		else
			cp++;
	}
	if(n>26)
	{
		cout<< -1 << endl;
		return 0;
	}
	if(ck+cp>26)
	{
		cout << -1 << endl;
		return 0;
	}
	else
		cout << ck << endl;






}