#include<bits/stdc++.h>

using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a,b;
	cin >> a >> b;
	int n=a+b;
	int cp;
	if(a>b)
		cp=0;
	else
		cp=1;
	for (int i = 1; i <=n; ++i)
	{
		if(a==0)
		{
			while(b !=0){
				cout << "G";
				b--;
			}
			break;
		}
		if(b==0)
		{
			while(a !=0){
				cout << "B";
				a--;
			}
			break;
		}
		if(cp==0)
		{
			cout << "B";
			a--;
			cp=1;
			continue;
		}
		if(cp==1)
		{
			cout << "G";
			b--;
			cp=0;
			continue;
		}
	}
	cout << endl;





}

