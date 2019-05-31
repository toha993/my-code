#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p,q;
	cin >> p >> q;
	if(q%p !=0)
	{
		cout << -1 << endl;
		return 0;
	}
	else if(q==p)
	{
		cout << 0 << endl;
		return 0;
	}
	else
	{
		int ck=0;
		while(p !=q)
		{
			int ans=q/p;
			if(ans%3==0)
				p *=3;
			else if(ans%2==0)
				p *=2;
			else
			{
				cout << -1 << endl;
				return 0;
			}
			ck++;
		}
		cout << ck << endl;
	}
}
