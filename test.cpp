#include<bits/stdc++.h>
#define ll long long 
using namespace std;
ll a[100005],b[100005];
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i] >> b[i];
	}
	int p=0,q=0,r,s,ans=0;
	for(int i=0;i<n;i++)
	{
		r=max(p,q);
		s=min(a[i],b[i]);
		if(s>=r)
			ans += s-r+1;
		if(p==q)
			ans--;
		p=a[i];
		q=b[i];
		//cout << ans << endl;
	}
	cout << ans+1 << endl;
}