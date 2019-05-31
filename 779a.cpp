#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int cnt[10]={0},cnt1[10]={0};
	int a[n],b[n];
	for (int i = 0; i < n+n; ++i)
	{
		if(i<n)
		{
				cin >> a[i];
				cnt[a[i]]++;
		}

		else
		{
			cin >> b[i];
			cnt1[b[i]]++;
		}
	}
	// for (int i = 1; i <= 5; ++i)
	// {
	// 	cout << cnt[i] << " " << cnt1[i] << endl;
	// }
	int ans=0,xd=0,pk=0;
	for (int i = 1; i <=5 ; ++i)
	{
		pk=(cnt[i]+cnt1[i]);
		//cout << pk << endl;
		if(pk==0)
			continue;
		if(pk&1)
		{
			cout << -1 << endl;
			return 0;
		}
		pk /=2;
		if(cnt[i]>pk)
		{
			ans +=(cnt[i]-pk);
		}
		else
		{
			ans +=(pk-cnt[i]);
		}
		if(cnt1[i]>pk)
		{
			xd +=(cnt1[i]-pk);
		}
		else
		{
			xd +=(pk-cnt1[i]);
		}

	}
	if(ans==xd)
	{
		cout << ans/2 << endl;
	}
	else
		cout << -1 << endl; 


	return 0;
}