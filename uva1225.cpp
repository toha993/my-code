#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int p;
		string s;
		cin >> p;
		for (int i = 1; i <= p; ++i)
		{
			s +=to_string(i);
		}
		for (int i = 0; i < s.length(); ++i)
		{
			if(s[i]=='0')
				a[0]++;
			else if(s[i]=='1')
				a[1]++;
			else if(s[i]=='2')
				a[02]++;
			else if(s[i]=='3')
				a[3]++;
			else if(s[i]=='4')
				a[4]++;
			else if(s[i]=='5')
				a[5]++;
			else if(s[i]=='6')
				a[6]++;
			else if(s[i]=='7')
				a[7]++;
			else if(s[i]=='8')
				a[8]++;
			else if(s[i]=='9')
				a[9]++;
		}
		for (int i = 0; i <= 8; ++i)
		{

			cout << a[i] << " ";
			a[i]=0;
		}
		cout << a[9] <<  endl;
		a[9]=0;
		//m.clear();


	}
}