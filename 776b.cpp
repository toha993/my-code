#include "bits/stdc++.h" 
using namespace std;
bool p[100005]; 
int prime()
{
	memset(p,true,sizeof(p));
	p[1]=false;
	for(int i=2;i*i<=100001;i++)
	{
		if(p[i])
		{
			for(int j=i*i;j<=100001; j +=i)
				p[j]=false;
		}


	}
}
int main()
{
	prime();
	int t;
	cin >> t;
	if(t>2)
	cout << 2 << endl;
	else
		cout << 1 << endl;

	for(int i=2;i<=t+1;i++)
	{
		if(p[i])
			cout << 1 << " ";
		else
			cout << 2 << " " ;

	}
	cout << endl;


}
