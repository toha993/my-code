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
int a[11][45];
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int p,q,lixa=0;

//incomplete
void chkdwn(int l,int m)
{
	int g=l-1;
	if(a[g][m]!=0)
		{
			//cout << "xd" << endl;
			goto here;
		}
	while(a[g][m] == 0 && g >0)
	{
		if(a[g-1][m]==0)
			g--;
		else
			break;

	}
	//cout << "tai " << endl;
	a[g][m]=a[l][m];
	a[l][m]=0;
	here:;
}
void chklft(int l,int m)
{

	int g=m-1;
	if(a[l][g]!=0)
		goto here;
	while(a[l][g] ==0 && g>1)
	{
		if(a[l][g-1]==0)
			g--;
		else
			break;
	}
	a[l][g]=a[l][m];
	a[l][m]=0;
	here:;
}
bool chk(int s,int r)
{
	for (int i = 1; i <= s; ++i)
	{
		for (int j = 1; j <= r; ++j)
		{
			if(a[i][j] !=0)
				return false;
		}
	}
	return true;
}
int main()
{
	int p,q,lixa=0;
	cin >> p >> q;
		lixa++;
		// if (p==0 || q==0)
		// 	break;
		for (int i = p; i >=1; --i)
		{
			for (int j = 1; j <= q; ++j)
			{
				cin >> a[i][j];
			}
		}
		while(1)
		{
			int y,z;
			cin >> y >> z ;
			if(y>p || z > q)
				continue;
			cout << a[y][z] << endl;
			if(y==0 && z==0)
				break;
			else
			{
				if(a[y+1][z]==a[y][z] && y+1 <=q)
				{
					a[y+1][z]=0;
				}
				if(a[y-1][z]==a[y][z] && y-1 >=1)
				{
					a[y-1][z]=0;
				}
				if(a[y][z+1]==a[y][z] && z+1 <=q)
				{
					a[y][z+1]=0;
				}
				if(a[y][z-1]==a[y][z] && z-1 >=1)
				{
					a[y][z-1]=0;
				}
				a[y][z]=0;
			}
			for (int i = p; i >=1; i--)
			{
				for (int j = 1; j <= q; j++)
				{
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl;
			for (int i = p; i>1 ; i--)
			{
				for (int j = 1; j <= q; ++j)
				{
					chkdwn(i,j);
				}
			}
			for (int i = p; i >=1; i--)
			{
				for (int j = 1; j <= q; j++)
				{
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl;
			for (int i = 1; i <=p; i++)
			{
				for (int j = 2; j<=q; j++)
				{
					
				}
			}
			for (int i = p; i >=1; i--)
			{
				for (int j = 1; j <= q; j++)
				{
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl;

		}
		vector<int>v[50];
		cout << "Grid " << lixa << "." << endl;
		cout << "    ";
		// if(chk)
		// {
		// 	cout << "Game Won" << endl;
		// }
		// else
		{
			
		}
		// for (int i = 0; i < p; ++i)
		// {
		// 	for (int j = 0; j < v[i].size(); j++)
		// 	{
		// 		cout << v[i][j] << " ";
		// 	}
		// 		cout << endl;
		// }

	}