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
	int n;
	cin >> n;
	int a[n+1],b[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		b[i]=a[i];
	}
	a[n]=1000000007;
	int first=0,last=0,cp=0,ck=0;
	bool visited[5];
	memset(visited,0,sizeof(visited));
	for (int i = 0; i < n; ++i)
	{
		if(a[i]>a[i+1])
		{
			ck++;
			if(visited[1]==0)
				first=i;
			visited[1]=1;
		}
		else
		{
			if(visited[1]==1)
				{
					last=i;
					visited[1]=0;
				}
		}
	}
	reverse(a+first,a+last+1);
	sort(b,b+n);
	for (int i = 0; i < n; ++i)
	{
		if(a[i] !=b[i])
		{
			cp=1;
			break;
		}
	}
	if(cp)
	{
		cout << "no" << endl;
	}
	else
	{
		cout << "yes" << endl;
		cout << first+1 << " " << last+1 << endl;
	}


}