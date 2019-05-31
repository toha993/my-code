#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,ans=0;
	cin >> a >> b;
	ans=(a+b)/3;
	if(a<ans)
		ans=a;
	if(b<ans)
		ans=b;
	cout << ans << endl;

}