#include<bits/stdc++.h>
using namespace std;
int s[100005];
int main()
{
	int a;
	cin >> a;
	int sum=0;
	for(int i=0;i<a;i++)
	{
		cin >> s[i];
		sum +=s[i];
	}
	bool hbe[a+1];
	memset(hbe,false,sizeof(hbe));
	for(int i=1;i<=a;i++)
	{
		int j=0;
		if(sum%i==0)
		{
			int ans=sum/i;
			int t=0;
			//cout << i << " " << ans << endl;
			while(j<a)
			{
				if(ans>t)
					t +=s[j++];
				else if(ans==t)
					t=0;
				else
					break;
			}
			if(t==ans)
				hbe[i]=true;
		}

	}
	for(int i=a;i>=1;i--)
	{
		//cout << hbe[i] << endl;
		if(hbe[i])
			cout << sum/i << " ";
	}
	cout << endl;





















}