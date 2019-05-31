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
vector<int>v;
int arr[]={16,64,225,256,529,1764};
int m[]={4,8,15,16,23,42};
int ars[]={32,60,64,92,168,120,128,184,336,240,345,632,368,672,966};
int mn[100][100];



int main()
{
	mn[0][0]=4,mn[0][1]=8;
	mn[1][0]=4,mn[1][1]=15;
	mn[2][0]=4,mn[2][1]=16;
	mn[3][0]=4,mn[3][1]=23;
	mn[4][0]=4,mn[4][1]=42;
	mn[5][0]=8,mn[5][1]=15;
	mn[6][0]=8,mn[6][1]=16;
	mn[7][0]=8,mn[7][1]=23;
	mn[8][0]=8,mn[8][1]=42;
	mn[9][0]=15,mn[9][1]=16;
	mn[10][0]=15,mn[10][1]=23;
	mn[11][0]=15,mn[11][1]=42;
	mn[12][0]=16,mn[12][1]=23;
	mn[13][0]=16,mn[13][1]=42;
	mn[14][0]=23,mn[14][1]=42;
	cout << "? 1 1" << endl;
	int xd=fflush(stdout);
	for (int i = 0; i < sizeof(arr); ++i)
	{
		if(xd==arr[i])
		{
			v.push_back(m[i]);
			break;
		}
		//? 2 2
	}
	cout << "? 2 2" << endl;
	xd=fflush(stdout);
	for (int i = 0; i < sizeof(arr); ++i)
	{
		if(xd==arr[i])
		{
			v.push_back(m[i]);
			break;
		}
		//? 2 2
	}
	cout << "? 3 5" << endl;
	xd=fflush(stdout);
	for (int i = 0; i < sizeof(ars); ++i)
	{
		if(xd==ars[i])
		{
			v.push_back(mn[i][0]);
			v.push_back(mn[i][1]);
			break;
		}
		//? 2 2
	}
	cout << "? 4 6" << endl;
	xd=fflush(stdout);
	for (int i = 0; i < sizeof(ars); ++i)
	{
		if(xd==ars[i])
		{
			v.push_back(mn[i][0]);
			v.push_back(mn[i][1]);
			break;
		}
		//? 2 2
	}
	cout << "! ";
	for (int i = 0; i < v.size(); ++i)
	{
		if(i != v.size()-1)
		cout << v[i] << " ";
		else
			cout << v[i];
	}
	cout << endl;

}