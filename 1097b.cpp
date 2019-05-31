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
int a[20],n,ans=0;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void parina(int x,int y)
{
	if(x==n)
	{
		if(y%360==0 || y==0)
			 ans=1;
			return;
	}
	parina(x+1,y+a[x+1]);
	parina(x+1,y-a[x+1]);
}

int main()
{
	//int n,a[20];
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	parina(0,0);
	if(ans)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}