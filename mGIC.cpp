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
int a[105];
map<int,int>mp;
int findSwaps( int n, int a[] )
{
int count = 0, i, j, temp, b[100000];
for( i = 0; i < n; i++ ) {
b[i] = a[i];
}
for( i = 0; i < n; i++ ) {
for( j = 0; j < n - 1; j++ ) {
if( b[j] > b[j+1] ) {
temp = b[j];
b[j] = b[j+1];
b[j+1] = temp;
count++;
}
}
}
mp[count]++;
return count;
}
int main()
{
	int n,m;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		a[i-1]=i;
	}
	// for (int i = 0; i < n; ++i)
	// {
	// 	cout << a[i] << endl;
	// }
	int ans=0;
	while(next_permutation(a,a+n))
	{
		ans +=findSwaps(n,a);
	}
	cout << ans << endl;
	// for (auto i :mp)
	// {
	// 	cout << i.first << " " << i.second << endl;
	// }
}