#include<bits/stdc++.h>
using namespace std;
int s[100005];
int main()
{
	int t,p;
	cin >> t;
	for(int i=0;i<t;i++)
		cin >> s[i];
	cin >> p;
	for(int i=0;i<p;i++)
	{
		int m,n;
		cin >> m >> n;
		if(s[m-1]%2)
			{
				cout << "Odd" << endl;
				continue;
			}
		if(m==n){
			cout << "Even" << endl;
			continue;
		}
		if(s[m]==0)
		{
			cout << "Odd" << endl;
			continue;
		}
		cout << "Even" << endl;
	}

}