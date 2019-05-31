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
	int n,k;
	cin >> n >> k;
	if(k>n)
	{
		cout << "NO" << endl;
		return 0;
	}
	if(k==n)
	{
		cout << "YES" << endl;
		while(k--)
		{
			cout << 1 << " ";
		}
		cout << endl;
		return 0;
	}
	int sum=k;
	int a[k];
	fill(a,a+k+1,1);
	for (int i = k-1; i >=0; i--)
	{
		while(sum+a[i]<=n)
		{
			sum +=a[i];
			a[i] *=2;
			//cout << a[i] << endl;
		}
	}
	if(sum !=n)
	{
		cout << "NO" << endl;
		return 0;
	}
	else{
		cout << "YES" << endl;
		for (int i = 0; i < k; ++i)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}























	return 0;
}