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

int a[100005],g[100005];
int main()
{
	int n;
	cin >> n ;
	while(n--)
	{
		int p;
		cin >> p;
	//	cin >>a[0];
		for (int i = 0; i < p; ++i)
		{
			cin >> a[i];
		}
		int pq=a[1]-a[0];
		//cout << pq << endl;
		int qr=a[2]-a[1];
		// << qr << endl;
		int rs=a[3]-a[2];
		//cout << rs << endl;
		int dif=0,mara=0;
		if(pq==qr || pq==rs)
		{
			dif=pq;
		}
		else if(qr!= rs)
		{
			mara=1;
		}
		else
			dif=qr;
		//cout << mara << endl;
		if(mara==1)
		{
			int ck=0;
			for (int i = 0; i < p-1; ++i)
			{
				g[0]=a[0];
				g[i+1]=g[i]+pq;
				if(g[i+1] !=a[i+1])
					{
						ck++;
					}
			}
		//	cout << ck << endl;
			if(ck==1)
			{
				for (int i = 0; i < p; ++i)
				{
					if(i != p-1)
					cout << g[i] << " ";
					else
					cout << g[i] << endl;
				}
				continue;
			}
			ck=0;
			//cout << qr << endl;
			int dhuksi=0;
			for (int i = 0; i < p-1; ++i)
			{
				g[0]=a[1]-qr;
				if(g[0] !=a[0] &&dhuksi==0 )
					{
						dhuksi=1;
						ck++;
					}
				g[i+1]=g[i]+qr;
				if(g[i+1] !=a[i+1])
					ck++;
			}
			//cout << ck << endl;
			if(ck==1)
			{
				for (int i = 0; i < p; ++i)
				{
					if(i != p-1)
					cout << g[i] << " ";
					else
					cout << g[i] << endl;
				}
				continue;
			}
			ck=0;
			dhuksi=0;
			for (int i = 1; i < p-1; ++i)
			{
				g[1]=a[2]-rs;
				if(g[1] !=a[1] && dhuksi==0)
					{
						ck++;
						dhuksi=1;
					}
				g[0]=g[1]-rs;
				if(g[0] !=a[0] && dhuksi==0)
					{
						ck++;
						dhuksi=1;
					}
				g[i+1]=g[i]+rs;
				if(g[i+1] !=a[i+1])
					ck++;
			}
			// << ck << endl;
			if(ck==1)
			{
				for (int i = 0; i < p; ++i)
				{
					if(i != p-1)
					cout << g[i] << " ";
					else
					cout << g[i] << endl;
				}
				continue;
			}
			//cout << ck << endl;


		}
		a[0]=a[1]-dif;
		for (int i = 0; i < p-1; ++i)
		{
			a[i+1]=a[i]+dif;
		}
		for (int i = 0; i < p; ++i)
		{
			if(i != p-1)
			cout << a[i] << " ";
			else
				cout << a[i] << endl;
		}

	}
}