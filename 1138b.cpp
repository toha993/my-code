#include<bits/stdc++.h>
using namespace std;
string a,b;
int main()
{
	int t,cn=0,ck=0,cp=0;
	cin >> t;
	cin >> a >> b;
	for(int i=0;i<t;i++)
	{
		if(a[i]=='1')
			ck++;
		if(b[i]=='1')
			cp++;
		if(a[i]=='1' && b[i]=='1')
			cn++;



	}
	cout << ck << " " << cp << " " << cn <<  endl;
	

	






















}