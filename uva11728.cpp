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
int paisi[1005]={0};
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int fctr(int n)
{
	int sum=1;
	for (int i = 2; i <=sqrt(n) ; ++i)
	{
		if(n%i==0)
		{
			if(n/i != i)
				sum +=i+(n/i);
			else
				sum +=i;
		}
	}
	return sum+n;
}
int main()
{
	int xd;
	for (int i = 2; i <= 1000; ++i)
	{
		int x=fctr(i);
		if(x<=1000)
			paisi[x]=i;
	}
	int ck=1;
	while(cin >> xd && xd)
	{
		cout << "Case " << ck++ << ": ";
		if(xd==1)
			{
				cout << 1 << endl;
				continue;
			}
		if(paisi[xd]==0)
		{
			cout <<-1 << endl;
		}
		else
			cout << paisi[xd] << endl;
	}
}