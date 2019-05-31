#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p,q,ans;
	cin >> p >> q;
	if(abs(q-1)<=abs(p-q))
	{
		ans=3+((p-1)*2)+(p-1)+(q-1);

	}
	else
	{
		ans=3+((p-1)*2)+(p-q)+(p-1);
	}
	cout << ans << endl;

}