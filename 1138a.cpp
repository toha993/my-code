#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin >> a;
	int ck=0,k=0,ans=0,ttl=0;
	for(int i=1;i<=a;i++)
	{
		int p;
		cin >> p;
		if(p==k)
			ck++;
		else{
			ans=ck;
			ck=1;
		}
		k=p;
		ttl=max(ttl,min(ck,ans));
	}
	cout << ttl*2 << endl;
}