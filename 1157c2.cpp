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
int a[200005];
string s;
int main()
{
	int p;
	cin >> p;
	for (int i = 0; i < p; ++i)
	{
		cin >> a[i];
	}
	int last=0,i,j,rmv=0,ck=0,cn=0;
	for (i = 0,j=p-1; i!=j ;)
	{
		//cout << i << " " << j << endl;
		if(a[i] < a[j] && a[i] > last)
		{

			s+='L';
			ck++;
			last=a[i];
			i++;
		}
		else if(a[i]==a[j])
		{
			// rmv++;
			// ck=0;
			// cn=0;
			// i++;
			// j--;
			// last=a[i-1];
			int tmp=last;
			int cnt=0,ckn=0;
			for (int x = i; x<=j ; ++x)
			{
				if(a[x]<=last)
					break;
				last=a[x];
				cnt++;
			}
			last=tmp;
			for (int x = j; x>=i ; --x)
			{
				if(a[x]<=last)
					break;
				last=a[x];
				ckn++;
			}
			//int mx=max(cnt,ckn);
			if(cnt>=ckn)
			{
				while(cnt--)
				{
					s +='L';
				}
			}
			else
			{
				while(ckn--)
				{
					s +='R';
				}
			}
			break;

		}
		else if(a[j] > last)
		{
			s+='R';
			cn++;
			last=a[j];
			j--;
		}
		else if(a[i] > last)
		{
			s+='L';
			ck++;
			last=a[i];
			i++;
		}
		else
			break;

	}
	//cout << ck << " " << cn << endl;
	if(a[i]>last && i !=p)
		s+='L';
	cout << s.length()+rmv << endl;
	cout << s << endl;
}