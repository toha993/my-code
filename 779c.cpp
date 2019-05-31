#include<bits/stdc++.h>
#define f first
#define sc second
#define pb push_back
using namespace std;
int a[200005],b[200005];
int main()
{
	int n,m;
	cin >> n >> m;
	vector<pair<int,int>>v,vt;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		//cin >> b[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> b[i];
	}
	int dif;
	for (int i = 0; i < n; ++i)
	{
		if(a[i]<=b[i])
			{
				dif=b[i]-a[i];
				v.pb({dif,i});
			}
		else
		{
			dif=a[i]-b[i];
			vt.pb({dif,i});
		}
	}
	sort(v.begin(),v.end());
	sort(vt.begin(),vt.end());
	int ans=0,ck=0;
	map<int,int>mp;
	for (int i = 0; i < v.size(); ++i)
	{
		ans +=a[v[i].sc];
		ck++;
		mp[v[i].sc]=1;
		//cout << ans << endl;
	}
	//cout << ans << endl;
	//cout << ck << endl;
	if(ck <m)
	{
		for (int i = 0; i < vt.size(); ++i)
		{
			ans +=a[vt[i].sc];
			ck++;
			mp[vt[i].sc]=1;
			if(ck==m)
				break;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if(mp[i]==0)
			ans +=b[i];
	}
	cout << ans << endl;

}